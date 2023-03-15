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
		int l = 0;
		int r = n-1;
		bool ok = false;
		while(r >= l)
		{
			int mid = (l+r)/2;
			if(arr[mid] == x)
			{
				ok = true;
				break;
			}
			else if(arr[mid] < x)
			{
				l = mid + 1;
			}
			else
			{
				r = mid - 1;
			}
		}
		if(ok)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
