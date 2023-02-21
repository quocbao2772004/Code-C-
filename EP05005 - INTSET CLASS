#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fi freopen("DATA.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fi;//fo;
}
string s;
int n,m;map<int,int>a;
map<int,int>b;
int main()
{
    goi();
    while(cin>>n>>m)
    {
    //cin>>n>>m;
    map<int,int>c;
    f(i,1,n)
    {
        cin>>a[i];
        c[a[i]]=1;
    }
    f(j,1,m)
    {
        cin>>b[j];
        if(c[b[j]]==1)c[b[j]]=2;
    }
     for(auto x=c.begin();x!=c.end();x++)
     {
         if(x->second==2)
         {
             cout<<x->first<<" ";
         }
     }
     cout<<endl;
    }
    return 0;
}
