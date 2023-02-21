#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
 //1, 2, 5, 10, 20, 50, 100, 200, 500, 1000.
int doi(int n)
{
    if(n>=1000)return 1000;
    if(n>=500)return 500;
    if(n>=200)return 200;
    if(n>=100)return 100;
    if(n>=50)return 50;
    if(n>=20)return 20;
    if(n>=10)return 10;
    if(n>=5)return 5;
    if(n>=2)return 2;
    return 1;

}
int test;
int n;
string s;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        int ans=0;
        cin>>n;
        while(n>0)
        {
            //cout<<n<<" ";
            int x=doi(n);
            int k=n/x;
            ans+=k;
            n-=k*x;
           // cout<<n<<" "<<x<<endl;
        }
        cout<<ans<<endl;

    }
       
    return 0;
}
