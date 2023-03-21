#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define PI 3.1415926535897932384626433832795

const ll MOD1 = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
	ll n,s;
	cin >> n >> s;
	vector<long long int>vec(n);
	for(int i=0;i<n;++i)
	{
		cin >> vec[i];
	}
	ll sum=0;
	ll l=0;
	ll res=0;
	for(int i=0;i<n;++i)
	{
		sum += vec[i];
		while(sum >= s)
		{
			sum -= vec[l];
			l++;
		}
		res += l;
	}
	cout << res << endl;
	return 0;
}


