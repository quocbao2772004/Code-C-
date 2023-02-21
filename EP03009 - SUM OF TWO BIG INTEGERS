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
string tong(string a,string b)
{
    int nho=0;string c="";int t=0;
    while(a.length()<b.length())a='0'+a;
    while(a.length()>b.length())b='0'+b;
    for(int i=a.length()-1;i>=0;i--)
    {
        t=(a[i]-'0')+(b[i]-'0')+nho;
        if(t>=10)nho=1;
        else nho=0;
        c=char(t%10+'0')+c;
    }
    if(nho==1)c='1'+c;
    while(c.length()>1&&c[0]=='0')c.erase(0,1);
    return c;
}
string a,b;
int main()
{
    goi();
    int test;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        cout<<tong(a,b)<<endl;
    }
    return 0;
}
