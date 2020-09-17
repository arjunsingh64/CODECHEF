#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc,a;
	cin>>tc;
	while(tc--)
	{
		set<int>s;
		int n;		
		cin>>n;	
		for(int i=0;i<n;++i)
		{
			cin>>a;				
			if(a!=0)			
			s.insert(a);
		}		
		cout<<s.size()<<"\n";
	}
}
