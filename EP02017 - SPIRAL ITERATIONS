#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("DATA.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //fi;fo;


}
int n,m,k;
map<int,map<int,int>>a;

int main()
{
    goi();
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        f(i,1,n)
        f(j,1,m)cin>>a[i][j];
        int x=0,p=1,h=n,c=m;bool ok=1;
        while(x<=n*m)
        {
            if(!ok)break;
            f(i,p,c)
            {
                x++;
                if(x==k)
                {
                    ok=0;
                    cout<<a[p][i];
                    break;
                }
            }
            if(!ok)break;
            f(i,p+1,h)
            {
                x++;
                if(x==k)
                {ok=0;
                    cout<<a[i][c];
                    break;
                }
            }
            if(!ok)break;
            if(p!=h)
            {
                f1(i,c-1,p)
                {
                    x++;
                    if(x==k)
                    {ok=0;
                        cout<<a[h][i];
                        break;
                    }
                }
            }
            if(!ok)break;
            if(p!=c)
            {
                f1(i,h-1,p+1)
                {
                    x++;
                    if(x==k)
                    {ok=0;
                        cout<<a[i][p];
                        break;
                    }
                }
            }if(!ok)break;
            p++;
            h--;
            c--;
        }
        cout<<endl;
    }
    return 0;
}
