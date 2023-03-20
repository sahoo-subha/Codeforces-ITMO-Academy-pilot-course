#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;

bool good(double x){
	int s=0;
	for(int i=0;i<n;i++)
	{
		s += floor(vec[i]/x);
	}
	return s>=k;
}

int main()
{
	cin >> n >> k;
	vec.resize(n);
	for(int i=0;i<n;i++)
	{
		cin >> vec[i];
	}
	
	double l = 0; //l is good
	double r = 1e8; //r is bad
	
	for(int i=0;i<100;i++)
	{
		double mid = (l+r)/2;
		if(good(mid)){
			l = mid;
		}
		else{
			r = mid;
		}
	}
	cout << setprecision(20) << l << endl;    //We can also output 'r' as well as they are very close to each other 
	
	return 0;
}
