#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


long long int nCr(long long int N) 
{ 
    return (N*(N-1))/2;
} 
  

int main()
{
    FIO;
    int tc;
    cin>>tc;
    while(tc--)
    {
       long long int N;
        cin>>N;
        if(N%4==0 || (N+1)%4==0)
        {
         long long int count=0;
         long long int fullsum=(N*(N+1))/2;
          
          int i=sqrt(fullsum+0.25)-0.5;
          
          if(ceil(sqrt(fullsum+0.25)-0.5)==i)
          count=nCr(i)+nCr(N-i);
          
          count=count+N-i;
          cout<<count<<endl;
        }
        else
          cout<<0<<endl;
  
    }
    

    return 0;
}
