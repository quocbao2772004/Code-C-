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
int test;
int n,m;

int main()
{
	goi();
	cin>>test;
	while(test--)
    {
        map<int,int>a,b,c,d,e,f;
        int ma=0,ans=0;
        ll t=0;
        cin>>n>>m;
        int x=max(n,m);
        f(i,1,n)
        {
            cin>>a[i];
            c[i]=c[i-1]+a[i];
        }
        f(j,1,m)
        {
            cin>>b[j];
            d[j]=d[j-1]+b[j];
        }
        int count=1;
        f1(i,x,1)
        {
            e[count]=e[count-1]+a[i];
            count++;
        }
        count=1;
        f1(i,x,1)
        {
            f[count]=f[count-1]+b[i];
            count++;
        }
        f(i,1,x)
        {
            ma=max(c[i]+f[x-i],d[i]+e[x-i]);
            ans=max(ans,ma);
        }
        cout<<ans<<endl;
        /*cout<<"Nguoc"<<endl;
        f(i,1,n)
        cout<<e[i]<<" ";cout<<endl;
        f(i,1,m)
        cout<<f[i]<<" ";cout<<endl;
        cout<<"Xuoi"<<endl;
        f(i,1,n)
        cout<<c[i]<<" ";cout<<endl;
        f(j,1,m)
        cout<<d[j]<<" ";*/

    }
      return 0;
}


