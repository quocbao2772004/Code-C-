#include<bits/stdc++.h>
#define ll long long
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
ll tcs(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}
int test;
long long n;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>n;
        while(__gcd(tcs(n),n)<=1)n++;
        cout<<n<<endl;
    }

    return 0;
}
