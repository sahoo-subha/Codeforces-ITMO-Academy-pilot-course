#include<bits/stdc++.h>
using namespace std;

double c;
bool good(double n)
{
	auto x = n * n;
    return x * x + n >= c;
}

int main()
{
	cin >> c;
	double l = 0.5;
	double r = c;
	for(int i=0;i<100;i++)
	{
		double mid = l + (r-l) / 2;
		if(good(mid)){
			r = mid;
		}
		else{
			l = mid;
		}
	}
	cout << setprecision(20) << l * l << endl;
	return 0;
}
