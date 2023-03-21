#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define PI 3.1415926535897932384626433832795

const ll MOD1 = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	ll n,s;
	cin >> n >> s;
	vector<long long int>vec(n);
	for(int i=0;i<n;++i)
	{
		cin >> vec[i];
	}
	ll sum=0;
	ll l=0;
	ll res=INT_MAX;
	for(int i=0;i<n;++i)
	{
		sum += vec[i];
		while(sum-vec[l] >= s)
		{
			sum -= vec[l];
			l++;
		}
		if(sum >= s){
			res = min(res,i-l+1);
		}
	}
	if(res == INT_MAX){
		cout << "-1" << endl;
	}
	else{
		cout << res << endl;
	}
	return 0;
}
