#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int>a(n);
	vector<int>b(m);
	for(int i=0;i<n;++i)
	{
		cin >> a[i];
	}
	for(int i=0;i<m;++i)
	{
		cin >> b[i];
	}
	vector<int>res(m);
	int i=0,j=0;
	for(int j=0;j<m;++j)
	{
		while(i<n && a[i]<b[j])
		{
			i++;
		}
		res[j] = i;
	}
	vector<int>::iterator it;
	for(auto it : res)
	{
		cout << it << " ";
	}
	return 0;
}


