#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<k;i++)
	{
		int x;
		cin >> x;
		int l = -1; //a[l] < x
		int r = n; //a[r] >= x
		while(r > l+1)
		{
			int mid = (l+r)/2;
			if(arr[mid] <= x)
			{
				l = mid;
			}
			else
			{
				r = mid;
			}
		}
		cout << l+1 << endl;
	}
	return 0;
}
