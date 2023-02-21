#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("DATA.in","r",stdin)
#define fi2 freopen("DATA2.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define ll long long
#define l length()
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fi;//fo;


}

string c[100001];
int main() {
   goi();
    string s;
    int count =0;
    while(getline(cin,s))
    {
        stringstream ss(s);
        string token;
        while(ss>>token)
        {
            int ok=1;
            if(token.l<=10)
            {
                f(i,0,token.l-1)
                {
                    if(token[i]<'0'||token[i]>'9'){ok=0;break;}
                }
                //cout<<token<<endl;
                if(ok==1)
                {
                    c[count++]=token;
                }
            }

        }
        ss.clear();
    }
        ll x=0;
        f(i,0,count-1)
        {
            stringstream ss1;ll h;
            ss1<<c[i];ss1>>h;
            x+=h;
        }
        cout<<x;
    return 0;
}
