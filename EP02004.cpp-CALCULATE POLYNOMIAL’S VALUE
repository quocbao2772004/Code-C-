#include<bits/stdc++.h>
#define ll long long
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int h=1e9+7;
ll mu(int a,int b)
{
   ll t=1;
    for(int i=1;i<=b;i++)t=((t%h)*(a%h))%h;
    return t;
}
int test;
int n;
map<int,int>a;
ll sum;int x;

int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>n>>x;
        sum=0;
       // cout<<mu(2,3)<<endl;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            int t=((a[i]%h)*(mu(x,n-i)%h))%h;
           sum=((sum%h)+(t%h))%h;
        }
        
        cout<<sum<<endl;

    }

    return 0;
}
