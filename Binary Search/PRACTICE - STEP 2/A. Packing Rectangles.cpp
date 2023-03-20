#include<bits/stdc++.h>
using namespace std;

long long w,h,n;
bool good(long long x)
{
	return (x/w)*(x/h) >= n;
}

int main()
{
	cin >> w >> h >> n;
	
	long long l = 0; //l is bad
	long long r = 1; //r is good
	while(!good(r))
	{
		r *= 2;
	}
	
	while(r > l+1)     //This equation is for integer number 
	{
		long long mid = (l+r)/2;
		if(good(mid))
		{
			r = mid;
		}
		else
		{
			l = mid;
		}
	}
	cout << r << endl;
	return 0;
}
