#include<bits/stdc++.h>
#define ll long long
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int souoc(int n)
{
    int count=0;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)
    {
        if(n/i==i)count++;
        else count+=2;
    }
    return count==2?1:0;
}
int n;int ans;
int main()
{
    goi();
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    if(souoc(i))cout<<i*i<<endl;//ans++;
    cout<<ans;
    return 0;
}