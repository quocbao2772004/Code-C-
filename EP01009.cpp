#include<bits/stdc++.h>
#define ll long long
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int test;
ll sum;
ll a,x,y;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>a>>x>>y;
        for(int i=1;i<=__gcd(x,y);i++)
        cout<<a;
        cout<<endl;
    }
    return 0;
}