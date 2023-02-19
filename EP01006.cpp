#include<bits/stdc++.h>
#define ll long long
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int nt[1000001];
void snt(int n)
{
    for(int i=2;i<=n;i++)nt[i]=1;
    for(int i=2;i<=n;i++)
    if(nt[i])
    {
        for(int j=i*2;j<=n;j+=i)nt[j]=0;
    }
}

int test;
int n;
string s;
int main()
{
    goi();
    snt(1000000);
   cin>>test;
   while(test--)
   {
    int ok=0;
       cin>>n;
       for(int i=1;i<=n/2;i++)
       {
        if(nt[i]&&nt[n-i]){ok=1;cout<<i<<" "<<n-i<<endl;break;}
       }
       if(ok==0)cout<<-1<<endl;

   }
    return 0;
}