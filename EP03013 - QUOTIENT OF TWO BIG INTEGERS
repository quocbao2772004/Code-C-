#include <bits/stdc++.h>
#define l length()
#define f0(i,a,b) for(int i=a;i<b;i++)
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define f2(i,a,b,k) for(int i=a;i<=b;i+=k)
#define fi freopen("Document.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define ll long long
#define pb push_back
#define ft first
#define sd second
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //fi;fo;

}
string chuan_hoa(string a)
{
    while(a[0]=='0'&&a.l>1)a.erase(0,1);
    return a;
}

int compare(string a,string b)
{
    a=chuan_hoa(a);
    b=chuan_hoa(b);
    if(a==b)return 2;
   if(a.length() > b.length())return 1;
   if(a.l<b.l)return 0;
   f(i,0,a.l-1)
   {
       if(a[i]>b[i])return 3;
       if(a[i]<b[i])return 0;
   }
}
string tru(string a,string b)
{
    int muon=0;string c="";
    while(a.length()<b.length())a='0'+a;
    while(b.length()<a.length())b='0'+b;
    f1(i,a.l-1,0)
    {
        int hieu=(a[i]-'0')-(b[i]-'0')-muon;
        if(hieu<0){hieu+=10;muon=1;}
        else {muon=0;}
        c=char(hieu%10+'0')+c;
    }
    c=chuan_hoa(c);
    return c;
}
void chia(string a,string b)
{
    string x="";int count=0;
    string ans="";
    if(!compare(a,b)){cout<<0<<endl;return ;}
    int j=-1;
    while(!compare(x,b))
    {
        j++;
        x+=a[j];

    }
    //cout<<x<<endl;
    if(j==a.l-1)
    {
        while(compare(x,b))
        {
            count++;
            x=tru(x,b);
        }
        cout<<count<<endl;return;
    }
    else
    {
        while(j<=a.l-1)
        {
            if(compare(x,b))
            {
                count=0;
                while(compare(x,b))
                {
                    count++;
                    x=tru(x,b);
                }
                ans+=to_string(count);
            }
            else
            {
                ans+='0';
            }
            j++;
            x+=a[j];
        }
        cout<<ans<<endl;
    }
}
string a,b;
ll n,m,p;
int test;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        a=chuan_hoa(a);
        b=chuan_hoa(b);
       
        chia(a,b);
    }
    return 0;
}
