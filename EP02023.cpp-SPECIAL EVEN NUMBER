#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
using namespace std;

 void goi()
 {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 } 
string s;
int n;int m;
int k;
int test;
int main()
{
    goi();
    cin>>test;
    for(int v=1;v<=test;v++)
    {
       cin>>s;
       if((s[s.length()-1]-'0')%2!=0)cout<<"NO"<<endl;
       else 
       {
        int ok=1;
        f(i,0,s.length()-1)
        {
            if((s[i]-'0')%2!=0){ok=0;break;}
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }
    
    }
    
    
    return 0;
}
