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
int checknt(int n)
{
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)return 0;
    return 1;
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
        if(checknt(tcs(a)))cout<<a<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
