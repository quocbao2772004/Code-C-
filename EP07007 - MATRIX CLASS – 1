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

map<int,map<int,int>>a,b;
int n,m;
int test;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        map<int,map<int,int>>c;
        cin>>n>>m;
        f(i,1,n)
        f(j,1,m)cin>>a[i][j];
        f(i,1,n)
        {
            f(j,1,m)
            {
                b[j][i]=a[i][j];
            }
        }
        f(i,1,n)
        {
            f(j,1,n)
            {
                f(k,1,m)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        f(i,1,n)
        {
            f(j,1,n)cout<<c[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
