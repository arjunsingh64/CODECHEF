#include<bits/stdc++.h>
using namespace std;

struct Date 
{ 
    int day, month, year; 
}; 

bool compare(const Date &d1, const Date &d2) 
{ 
 
    if (d1.year < d2.year) 
        return true; 
    if (d1.year == d2.year && d1.month < d2.month) 
        return true; 
    if (d1.year == d2.year && d1.month == d2.month && 
                              d1.day < d2.day) 
        return true; 
  
    return false; 
}


int main()
{
 int t;
 cin>>t;
 
 Date arr[t];
 
 for(int i=0;i<t;i++)
 {
     string str;
     cin>>str;
     
     arr[i].year=stoi(str.substr(str.length()-4,4));
     int temp=0;
     for(int j=0;j<str.length()-5;j++)
     {
         if(str[j]=='/')
         {temp=j;
         break;
         }
     }
     arr[i].month=stoi(str.substr(temp+1,str.length()-temp-6));
     arr[i].day=stoi(str.substr(0,temp));
 }
    
    sort(arr, arr+t, compare); 
   
    for (int i=0; i<t; i++) 
    { 
        cout << arr[i].day << "/" << arr[i].month 
             << "/" << arr[i].year; 
        cout << endl; 
    }  
    
    
    return 0;
}
