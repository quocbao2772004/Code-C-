#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout);
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   // fi;fo;
}
int test;
int n,m,k;
map<int,map<int,int>>a;
int c[100001];
int x=1;
void nhap()
{
    cin>>n>>m>>k;
   x=1;
    f(i,1,n)
    {
        f(j,1,m)
        {
            cin>>a[i][j];
            if(j==k){c[x]=a[i][j];x++;}
        }
    }

}
void solve()
{
   // cout<<x<<endl;
    sort(c+1,c+n+1);
   // f(i,1,n)cout<<c[i]<<" ";cout<<endl;
    f(i,1,n)
    {
        f(j,1,m)
        {
            if(j==k)cout<<c[i]<<" ";
            else cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    goi();
    nhap();solve();
    return 0;
}
