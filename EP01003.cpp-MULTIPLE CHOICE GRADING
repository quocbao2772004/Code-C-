#include<bits/stdc++.h>
#define ll long long
using namespace std;
int test;
int n;
string s101="ABBADCCABDCCABD";
string s102="ACCABCDDBBCDDBB";
char x;
int main()
{
   cin>>test;
   while(test--)
   {
    cin>>n;double score=0;
   
    for(int i=1;i<=15;i++)
    {
        cin>>x;
        if(n==101)
        {
            if(x==s101[i-1])score=score+(double)10/15;
        }
        else 
        {
            if(x==s102[i-1])score=score+(double)10/15;
        }
    }
     cout<<fixed<<setprecision(2)<<score<<endl;
   }
    return 0;
}
