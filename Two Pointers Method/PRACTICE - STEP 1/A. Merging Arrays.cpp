#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
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
	int i=0,j=0,k=0;
	vector<int>c(n+m);
	while(i < n || j < m)
	{
		if(j==m || i<n && a[i]<b[j])
		{
			c[k++] = a[i];
			i++;
		}
		else
		{
			c[k++] = b[j];
			j++;
		}
	}
	vector<int>::iterator it;
	for(auto it : c)
	{
		cout << it << " ";
	}
	return 0;
}

