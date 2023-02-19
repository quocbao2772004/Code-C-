#include <bits/stdc++.h>
using namespace std;
map<int,int>a;
int l,r;
int n;
void solve(int l,int r)
{
    int k=0;int ok=0;
    for(int i=l;i<=r-1;i++)
    {
        if(a[i]>a[i+1])
        {
            if(ok==0)
            ok=1;
        }
        else if(a[i]<a[i+1])
        {
            if(ok==1){k=1;cout<<"No"<<endl;break;}
        }

    }
    if(k==0)cout<<"Yes"<<endl;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        cin>>l>>r;
        solve(l,r);
    }
    
    return 0;
}
