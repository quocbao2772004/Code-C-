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
int n,m;
ll a,b,c,d;
int test;
int main()
{
    goi();
    cin>>a>>b>>c>>d;

    ll bcnn=b/__gcd(b,d)*d;
    a=bcnn/b*a;
    c=bcnn/d*c;
    ll tu=a+c;
    ll x=__gcd(tu,bcnn);
    cout<<tu/x<<"/"<<bcnn/x;
    return 0;
}
