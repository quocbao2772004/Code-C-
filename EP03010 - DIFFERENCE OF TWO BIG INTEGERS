#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // fi;fo;

}
string hieu(string a,string b)
{
    int tru=0,muon=0;
    string c="";
    while(a.length()<b.length())
        a='0'+a;
    while(a.length()>b.length())
        b='0'+b;
    f1(i,a.length()-1,0)
    {
        tru=(a[i]-'0')-(b[i]-'0')-muon;
        if(tru<0)
        {
            muon=1;
            tru+=10;
        }
        else
            muon=0;
        c=char(tru%10+'0')+c;
    }
    //while(c.length()>1&&c[0]=='0')c.erase(0,1);
    return c;
}
string s;
int test;
string a,b;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        if(a.length()>b.length())
            cout<<hieu(a,b)<<endl;
        else if(b.length()>a.length())
            cout<<hieu(b,a)<<endl;
        else
        {
            if(a>b)
                cout<<hieu(a,b)<<endl;
            else
                cout<<hieu(b,a)<<endl;
        }
    }

    return 0;
}
