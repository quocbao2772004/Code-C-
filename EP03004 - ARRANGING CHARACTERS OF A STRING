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
    //cin.ignore();
    while(test--)
    {
        map<int,int>a;int ok=1;
        cin>>s;
        int ans=0;
        f(i,0,s.l-1)
        {
            a[s[i]-'a']++;
        }
        int n=s.l;
        if(n%2==1)n++;
        f(i,0,25)
        if(a[i]>n/2){ok=0;break;}
       cout<<ok;
        cout<<endl;
    }

    return 0;
}
