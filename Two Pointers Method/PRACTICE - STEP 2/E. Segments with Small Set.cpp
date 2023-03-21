#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define PI 3.1415926535897932384626433832795

const ll MOD1 = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int cnt[100001];
int num;
int k=0;

void add(int x)
{
	cnt[x]++;
	if(cnt[x] == 1)
	{
		num++;
	}
}

void remove(int x)
{
	cnt[x]--;
	if(cnt[x]==0)
	{
		num--;
	}
}

bool good()
{
	return num<=k;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	ll n;
	cin >> n >> k;
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
		add(vec[i]);
		while(!good())
		{
			remove(vec[l]);
			l++;
		}
		res += (i-l+1);
	}
	cout << res << endl;
	return 0;
}


