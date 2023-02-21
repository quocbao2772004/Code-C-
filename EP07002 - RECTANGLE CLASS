#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fi freopen("DATA.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //fi;fo;

}

string s;
ll n,m,p;
int test;
int main()
{
    goi();
    cin>>n>>m>>s;
    if(n>0&&m>0)
    {
    if(s[0]>='a'&&s[0]<='z')s[0]-=32;
    f(i,1,s.length()-1)
    {
        if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
    }
    cout<<(n+m)*2<<" "<<n*m<<" "<<s;
    }
    else cout<<"INVALID";

    return 0;
}
