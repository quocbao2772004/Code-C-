#include<bits/stdc++.h>
#define ll long long
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int test;
int n;
int a[100001];

int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>n;
        int ans=-999999;
        for(int i=1;i<=n;i++)cin>>a[i];
        
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            ans=max(ans,a[j]-a[i]);
        }
        cout<<ans<<endl;

    }

    return 0;
}
