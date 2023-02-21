#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fi freopen("DATA.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fi;//fo;

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
string s;
int main(){
    goi();
    cin>>s;
    while(s.size()>1)
    {
        int n=s.length();

        string a=s.substr(0,n/2);
        string b=s.substr(n/2,n-n/2);
       // cout<<a<<" "<<b<<endl;
        s=tong(a,b);
        cout<<s<<endl;

    }

    return 0;
}

