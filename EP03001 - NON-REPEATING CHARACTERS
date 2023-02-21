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
int test;string s;
map<int,int>dd;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        f(i,0,25)dd[i]=0;
        cin>>s;
        f(i,0,s.length()-1)
        {
            dd[s[i]-'A']++;
        }
        f(i,0,s.length()-1)
        {
            if(dd[s[i]-'A']==1)cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
