#include <bits/stdc++.h>
using namespace std;

 void goi()
 {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 } 
map<int,map<int,int>>a;
int n;
int test;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
       cin>>n;
       for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++)cin>>a[i][j];
       for(int i=1;i<=n;i++)
       {
         for(int j=1;j<=n;j++)
         {
            if(i==1||j==1||i==n||j==n)cout<<a[i][j]<<" ";
            else cout<<" ";
         }
         cout<<endl;
       }
        
    }
    
    return 0;
}
