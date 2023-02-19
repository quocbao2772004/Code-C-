#include <bits/stdc++.h>
using namespace std;
map<int,int>a,b,c,d;
int l,r;
int n;int m;
    int test;
 multiset<int> v;
 void goi()
 {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 } 
 multiset<int>::iterator it;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
       
        for(int i=1;i<=100000;i++)
        {
            c[i]=0;d[i]=0;
        }
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            c[a[i]]++;
        }
       for(int j=1;j<=m;j++){cin>>b[j];d[b[j]]++;}
       for(int i=1;i<=n;i++)
       {
        if(d[a[i]]==0)v.insert(a[i]);
       }
       for(int j=1;j<=m;j++)
       {
         for(int i=1;i<=c[b[j]];i++)
         cout<<b[j]<<" ";
         c[b[j]]=0;
       }
      
       for(it=v.begin();it!=v.end();it++)cout<<*it<<" ";cout<<endl;
       v.clear();
       //cout<<v.empty()<<endl;
    }
    
    return 0;
}
