#include <bits/stdc++.h>
#define f(i, a, b) for (int i = a; i <= b; i++)
#define fi freopen("d.inp", "r", stdin)
#define fo freopen("d.out", "w", stdout);
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // fi;fo;
}
int check(string s)
{
    int t=0;
    f(i,0,s.length()-1)
    {
        t+=(s[i]-'0');
    }
    return t;
}
string s;
int test;

int main()
{
    goi();
    cin >> test;
    while (test--)
    {
        int ok=0;
        cin>>s;
        while(s.size()>1)
        {
            int h=check(s);
            if(h==9){ok=1;break;}
            else 
            {
                stringstream ss;string x="";
                ss<<h;
                ss>>x;
                s=x;ss.clear();
            }
        }
        cout<<ok<<endl;
      
    }
    return 0;
}
