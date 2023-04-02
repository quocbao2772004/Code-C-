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
    cin>>test;
    while(test--)
    {
        ll res=0;
        cin>>s>>n;
        f(i,0,s.length()-1)
        {
            res=(res*10+(s[i]-'0'))%n;
        }
        cout<<res<<endl;
    }

    return 0;
}
