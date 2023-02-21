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
    cin>>s;
    int ok=s[0]-'0';
    int count =0;
    f(i,0,s.length()-1)
    {
        if(s[i]-'0'==ok)count++;
        else {ok=s[i]-'0';count=1;}
        if(count==7){cout<<"YES";return 0;}
    }
    if(count>=7)cout<<"YES";
    else cout<<"NO";

    return 0;
}
