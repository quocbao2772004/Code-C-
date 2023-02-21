#include <bits/stdc++.h>
#define ll long long
using namespace std;

 void goi()
 {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 } 
 ll h=1e9+7;
 ll mu(ll n,ll k)
 {
    ll t=1;
    for(int i=1;i<=k;i++)
    {
        t=((t%h)*(n%h))%h;
    }
    return t;
 }
map<int,ll>a,b;

int n;
int test;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        ll ans=1;
      cin>>n;
      for(int i=1;i<=n;i++)
      {
        cin>>a[i]; 
      }
     ll x=a[1];
      for(int i=1;i<=n;i++)
      {
        x=__gcd(x,a[i]);
      }
      for(int i=1;i<=n;i++)
      {
        ans=((ans%h)*(a[i]%h))%h;
      }
      cout<<mu(ans,x)<<endl;
      
        
    }
    
    return 0;
}
