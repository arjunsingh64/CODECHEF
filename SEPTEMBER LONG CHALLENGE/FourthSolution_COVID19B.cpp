#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
{
    int N;
    cin>>N;
    int v[N];
    for(int i=0;i<N;i++)
    cin>>v[i];
    
    int b[N];
    for(int i=0;i<N;i++)
    b[i]=1;
    
     for(int i=0; i<N; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(v[j] > v[i])
                b[i]+=1;
        }
          for(int j=i+1; j<N; j++)
        {
            if(v[i] > v[j])
                b[i]+=1;
        }
    }
    
    sort(b,b+N);
    cout<<b[0]<<" "<<b[N-1]<<endl;
    
}
}


