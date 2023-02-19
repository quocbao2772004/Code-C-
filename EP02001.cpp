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
        int mi=99999;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        for(int i=2;i<=n;i++)
        {
            mi=min(mi,a[i]-a[i-1]);
        }
        cout<<mi<<endl;

    }

    return 0;
}
