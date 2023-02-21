#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout);
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //fi;fo;
}
int check(ll n)
{
    if(n%10==3||n%3==0)return 0;
    return 1;
}
int main()
{
    goi();
    ll n;
    int k=1;
    cin>>n;
    int dem=0;
    while(dem<n)
    {
        if(check(k)){dem++;}
        k++;
    }
    cout<<k-1;
    return 0;
}
