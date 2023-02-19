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
ll a,x,y;int n;
double ans;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>n;ans=0;
        for(int i=1;i<=n;i++)
        {
            ans=(double)sqrt(i+ans);
        }
        cout<<fixed<<setprecision(5)<<ans<<endl;
    }
    return 0;
}