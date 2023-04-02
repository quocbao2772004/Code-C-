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

string s,x,c[1001],ans[1001];
ll n,m,p;
int test;
int main()
{
    goi();
    int count =0;
    while(getline(cin,x))
    {
        f0(i,0,x.l)
        {
            if(x[i]=='?'||x[i]=='!')x[i]='.';
        }
        s=s+' '+x;
    }
    stringstream ss(s);
    string token="";
    while(getline(ss,token,'.'))
    {
        bool ok=0;
        f0(j,0,token.l)
        {
            token[j]=tolower(token[j]);
            if((token[j]>='a'&&token[j]<='z')||(token[j]>='0'&&token[j]<='9'))
                ok=1;
        }
        if(ok)
        {
            count++;
            c[count]=token;
        }

    }
    f(i,1,count)
    {
        stringstream ss(c[i]);
        int d=0;
        while(ss>>token)
        {
            f0(j,0,token.l)
            {
                token[j]=tolower(token[j]);
            }
            if(d)ans[i]+=' '+token;
            else ans[i]=token;
            d=1;
        }
        ans[i][0]=toupper(ans[i][0]);
    }
    f(i,1,count)
    cout<<ans[i]<<endl;
    return 0;
}
