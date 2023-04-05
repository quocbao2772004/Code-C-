#include <bits/stdc++.h>
#define l length()
#define f0(i,a,b) for(int i=a;i<b;i++)
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define f2(i,a,b,k) for(int i=a;i<=b;i+=k)
#define fi freopen("Document.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define ll long long
#define pb push_back
#define ft first
#define sd second
#define vi vector<int>
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //fi;fo;

}
int hang[8]={-1,-1,-1,0,0,1,1,1};
int cot[8]={-1,0,1,-1,1,-1,0,1};
void Try(int i,int j,int n,int m,vector<vi>&a)
{
    a[i][j]=0;
    f(k,0,7)
    {
        int x=i+hang[k];
        int y=j+cot[k];
        if(x>=1&&x<=n&&y>=1&&y<=m&&a[x][y]==1)
        {
            Try(x,y,n,m,a);
        }
    }

}
void solve(int n,int m,vector<vi>&a)
{
    int ans=0;
    f(i,1,n)
    {
        f(j,1,m)
        if(a[i][j]==1)
        {
            Try(i,j,n,m,a);
            ans++;
        }
    }
    cout<<ans<<endl;
}
int n,m,p;
int test;

int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        vector<vi>a(n+1,vi(m+1));
        f(i,1,n)
        {
            f(j,1,m)
            {
                cin>>a[i][j];
            }
        }
        solve(n,m,a);

    }
    return 0;
}
