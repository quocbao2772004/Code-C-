#include<bits/stdc++.h>
#define ll long long
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
ll a,b;
int tcs(ll n)
{
    int ans=0;
    while(n>0)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}
ll sum;
int test;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>a;
        while(a>=10)
        {
            a=tcs(a);
        }
        cout<<a<<endl;
    }
    return 0;
}
