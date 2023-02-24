#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("SEQUENCE.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define l length()
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fi;//fo;

}
map<int,int>x,a;
map<int,string>d;
int sl;
void print(int n)
{
    map<int,int>c={};
    int count=0;
    f(i,1,n)
    {
        if(x[i]==1)
        {
            c[count]=a[i];count++;
        }
    }
    if(count>=2)
    {
        int ok=1;
        f(i,0,count-2)
        {
            if(c[i]>c[i+1]){ok=0;break;}
        }
        if(ok)
        {
            sl++;
            f(i,0,count-1)
            {

                d[sl]=d[sl]+to_string(c[i])+' ';
            }
        }
    }
}
void thu(int i,int n)
{
    f(j,0,1)
    {
       x[i]=j;
       if(i!=n) thu(i+1,n);
       else
       {
           print(n);
       }
    }
}
ll n,m;

int q;

int main()
{
    goi();
    cin>>n;
    f(i,1,n)cin>>a[i];
    thu(1,n);
    f(i,1,sl-1)
    {
        f(j,i+1,sl)
        {
            if(d[i]>d[j])swap(d[i],d[j]);
        }
    }
    f(i,1,sl)
    cout<<d[i]<<endl;

    return 0;
}


