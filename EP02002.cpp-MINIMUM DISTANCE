#include<bits/stdc++.h>
#define ll long long
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int test;
int n;
map<int,int>a;

int main()
{
    goi();
   cin>>test;
   while(test--)
   {
     cin>>n;
     int mi=99999;
   for(int i=1;i<=n;i++)cin>>a[i];
   for(int i=1;i<=n-1;i++)
   {

    for(int j=i+1;j<=n;j++)
    {
       mi=min(mi,abs(a[i]-a[j]));
    }
   }
   cout<<mi<<endl;
   }
  
    return 0;
}
