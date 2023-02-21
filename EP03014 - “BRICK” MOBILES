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
    //fi;fo;

}
int check(string s)
{
    int i=0,j=s.size()-1;
    while(i<=j)
    {
        if(s[i]!=s[j])return 0;
        i++;j--;
    }
    return 1;
}
string s;
ll n,m,p;
int test;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        string x="";
        cin>>s;

        f(i,0,s.length()-1)
        {
            if(s[i]>='a'&&s[i]<='z')s[i]-=32;
            if(s[i]=='A'||s[i]=='B'||s[i]=='C')x=x+'2';
            else if(s[i]=='D'||s[i]=='E'||s[i]=='F')x=x+'3';
            else if(s[i]=='G'||s[i]=='H'||s[i]=='I')x=x+'4';
            else if(s[i]=='J'||s[i]=='K'||s[i]=='L')x=x+'5';
            else if(s[i]=='M'||s[i]=='N'||s[i]=='O')x=x+'6';
            else if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S')x=x+'7';
            else if(s[i]=='T'||s[i]=='U'||s[i]=='V')x=x+'8';
            else x=x+'9';
        }
        if(check(x))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
