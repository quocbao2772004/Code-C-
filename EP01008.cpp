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
map<int,int>f;
void fibo(int n)
{
    f[0]=0;f[1]=1;f[2]=1;
    a[0]=1;a[1]=1;a[2]=1;
    for(int i=3;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
        a[f[i]]=1;
    }
}
int x;
int main()
{
    goi();
    fibo(1000);
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        { cin>>x;if(a[x])cout<<x<<" ";}
        cout<<endl;
    }

    return 0;
}