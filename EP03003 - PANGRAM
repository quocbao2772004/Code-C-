#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("DATA1.in","r",stdin)
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
   // fi;fo;


}

int main() {
   goi();
    int test;string s;
    int k;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        map<int,int>a;
        cin>>s;
        cin>>k;int ans=0;
        f(i,0,s.l-1)
        {
            if(s[i]>='a'&&s[i]<='z')
            a[s[i]-'a']++;
            else a[s[i]-'A']++;
        }
        f(i,0,25)
        if(a[i]==0)ans++;
        if(ans<=k)cout<<1;
        else cout<<0;
        cout<<endl;
    }

    return 0;
}
