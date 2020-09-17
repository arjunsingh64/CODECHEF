#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{  	
		int count=0;	
		int N,i,j;
		cin>>N;
		int arr[N][N];
		for(i=0;i<N;++i)
		{
			for(j=0;j<N;++j)
			{
				cin>>arr[i][j];	
			}
		}
		bool array[1][N];
		int cnt=1;
		for(i=0;i<1;++i)
		{
			for(j=1;j<N;++j)
			{
				++cnt;
				if(arr[i][j]==cnt)
				{
					array[i][j]=true;
				}else
				{
					array[i][j]=false;
				}
			}
		}
		int u;
		for(i=0;i<1;++i)
		{
			for(j=N-1;j>0;--j)
			{
				if(array[i][j]==false)
				{
					++count;
					array[i][j]=true;
					for(u=N-2;u>0;--u)
					{
						if(array[i][u]==true)
						array[i][u]=false;
						else
						array[i][u]=true;
					}				
				}			
			}
		}
		cout<<count<<"\n";
		
	}
}
