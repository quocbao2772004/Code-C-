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
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // fi;fo;

}
ll n,m,p;
int test;
const int N=30;
char a[N][N];
int c[N][N]={0},d[N][N]={0};
int dp[N][N]={0};
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        memset(c,0,sizeof(c));
        memset(d,0,sizeof(d));
        cin>>n;
        int ma=0,ans=0;
        f(i,1,n)
        {
            f(j,1,n)
            {
                cin>>a[i][j];
                if(a[i][j]=='O')c[i][j]=d[i][j]=0;
                else
                {
                    if(i==1)c[i][j]=1;
                    else c[i][j]=c[i-1][j]+1;
                    if(j==1)d[i][j]=1;
                    else d[i][j]=d[i][j-1]+1;
                }
            }
        }
        /*cout<<"c[i][j]="<<endl;
        f(i,1,n)
        {
            f(j,1,n)cout<<c[i][j]<<" ";
            cout<<endl;
        }
        cout<<"d[i][j]="<<endl;
        f(i,1,n)
        {
            f(j,1,n)cout<<d[i][j]<<" ";
            cout<<endl;
        }*/
        f(i,2,n)
        {
            f(j,2,n)
            {
                int mi=min(c[i][j],d[i][j]);
                while(mi>ans)
                {
                    if(d[i-mi+1][j]>=mi&&c[i][j-mi+1]>=mi)ans=mi;
                    mi--;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
