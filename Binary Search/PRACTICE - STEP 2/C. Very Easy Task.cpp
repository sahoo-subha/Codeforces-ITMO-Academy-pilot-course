#include<bits/stdc++.h>
using namespace std;

long long n,x,y;
bool good(long long t)
{
	long long num = 0;
    if (t < min(x, y)) 
	{
        num = 0;
    } 
	else {
        num = 1 + (t - min(x, y)) / x + (t - min(x, y)) / y;
    }
    return num >= n;
}

int main()
{
	cin >> n >> x >> y;
	long long l = 0;   			//l is bad
	long long r = n*min(x,y);   //r is good 
	//Another Process for finding the value 'r' => we will multiply r with 2 untill we found the good value 
	
	while(r > l+1)
	{
		long long mid = (l+r)/2;
		if(good(mid))
		{
			r = mid;
		}
		else{
			l = mid;
		}
	}
	cout << r << endl;
	return 0;
}
