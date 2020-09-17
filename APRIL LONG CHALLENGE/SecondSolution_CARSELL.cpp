#include <bits/stdc++.h>
using namespace std;

int maxProfit(int *arr,int n)
{
	int ans = 0;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		ans = arr[i]-i;
		if(ans>0)
		{
			sum = sum + ans;
			sum = sum%1000000007; 		
		}
	}
		
		cout<<sum<<"\n";	
	
}

int main()
{

	int tc,m;
	
	cin>>tc;
	int sum[tc];	
	for(m=0;m<tc;m++)	
	{
		int i,n;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n,greater<int>());

		maxProfit(arr,n);
		
	}
	
}

