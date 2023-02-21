#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
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

map<int,map<int,int>>a,b,c;
int n,m,p;
int test;
int main()
{
    goi();


        cin>>n>>m>>p;
        f(i,1,n)
        f(j,1,m)cin>>a[i][j];
        f(i,1,m)
        {
            f(j,1,p)
            {
                cin>>b[i][j];
            }
        }
        f(i,1,n)
        {
            f(j,1,p)
            {
                f(k,1,m)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        f(i,1,n)
        {
            f(j,1,p)cout<<c[i][j]<<" ";
            cout<<endl;
        }

    return 0;
}
