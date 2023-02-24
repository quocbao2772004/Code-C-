#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("DATA.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define l length()
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //fi;fo;

}
ll n,m;
map<int,map<int,int>>a;
void print()
{
    f(i,1,n)
    {
        f(j,1,n)cout<<a[i][j]<<" ";
        cout<<endl;
    }

}


int main()
{
    goi();
    cin>>n;
    int k=1;
    a[1][n]=k;k++;int d=1;
    while(k<=n*n)
    {
        int i=n-d,j=1;
        if(i>0)
        {
           while(i<=n)
           {
            a[j][i]=k;
            k++;i++;j++;

           }

        }
        else
        {
            i=abs(i);

            while(i<=n-2)
           {
            a[i+2][j]=k;
            k++;i++;j++;
           }
        }
        d++;

    }
    print();
    return 0;
}


