#include<bits/stdc++.h>
#define ll long long
using namespace std;
int check(int n)
{
    int nt=2;int count=0;
    while(nt<=sqrt(n))
    {
       if(n%nt==0)
       {
        int count1=0;
         while(n%nt==0)
        {
            count1++;
            if(count1>1)return 0;
            n/=nt;
        }
        count+=count1;
        if(count>3)return 0;
       }
       nt++;
    }
    if(n>1)count++;
    if(count==3)return 1;
    return 0;
}
int test;
int n;
string s;
int main()
{
   cin>>test;
   while(test--)
   {
     cin>>n;
     cout<<check(n)<<endl;
   }
    return 0;
}
