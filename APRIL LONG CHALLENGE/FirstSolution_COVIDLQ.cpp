	#include<iostream>
#include<cstring>
using namespace std;

bool check(int *A,int n)
{
  int first=-1;
  int present;
  for(int i=0;i<n;i++)
  {
     if((A[i])&&(first==-1))
       first=i;                 //index of first 1 in the array
     else if((A[i]))
     {
       present=i;              //index of current 1
       if((present-first)<6)  
         return false;
       else
         first=i;
     }
   }
     return true;  //only possible after coming outside loop
}

int main()
{
	int tc;
	cin>>tc;
	int i,j;
	int size;
	int arr[size]; // to storr 1 and 0
	int ans[tc];	
	for(i=0;i<tc;i++)
	{
		cin>>size;
		for(j=0;j<size;j++)
		{
			cin>>arr[j];			
		}
	bool status = check(arr,size);
		
		if(status)
		{
			ans[i]=1;
		}else
		{
			ans[i]=0;
		}
	}
		for(i=0;i<tc;i++)
		{
			if(ans[i])
			{
				cout<<"YES"<<"\n";
			}
			else
			{
				cout<<"NO"<<"\n";
			}
		}
}
