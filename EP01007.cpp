#include<bits/stdc++.h>
#define ll long long
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int test;
int n;
ll a[15];
ll mu(int n,int k)
{
    ll t=1;
    for(int i=1;i<=k;i++)t=t*n;
    return t;
}
ll scs(ll n)
{
    ll s=0;
    while(n>0)
    {
        s++;
        n/=10;
    }
    return s;
}
ll bcnn(ll a,ll b)
{
    return a/(__gcd(a,b))*b;
}
int main()
{
    goi();
   
    cin>>test;
    while(test--)
    {
        ll t;
        for(int i=1;i<=4;i++)
       {
        cin>>a[i];
       }
       ll lcm=bcnn(a[1],bcnn(a[2],a[3]));
       if(scs(lcm)>a[4])cout<<-1;
       else 
       {
        t=mu(10,a[4]-1);
       cout<<lcm*((t-1)/lcm+1);
       }
       cout<<endl;
      
    }

    return 0;
}