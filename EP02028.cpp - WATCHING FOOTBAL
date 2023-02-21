#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout);
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //fi;fo;
}

int n,m,k;
map<int,int>a;
int x=1;
void nhap()
{
    cin>>n;
    f(i,1,n)cin>>a[i];
}
void solve()
{
    int time=0;int ok=1;
   f(i,1,n)
   {
       if(time+15<a[i]){ok=0;cout<<time+15;break;}
       else time=a[i];
       //cout<<"time="<<time<<endl;
   }
  // cout<<time<<endl;
   if(ok)cout<<(((time+15)<90)?(time+15):90);
}
int main()
{
    goi();
    nhap();solve();
    return 0;
}
