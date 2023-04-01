#include <bits/stdc++.h>
#define l length()
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
string nhan(string a,string b)
{
    if(a=="0"||b=="0"||a.l==0||b.l==0)return "0";
    vector<int>ans(a.l+b.l,0);
    int cs1=0,cs2=0,sum=0;
    f1(i,a.l-1,0)
    {
        int nho=0;
        int x=a[i]-'0';
        cs2=0;
        f1(j,b.l-1,0)
        {
            int y=b[j]-'0';
            sum=x*y+ans[cs1+cs2]+nho;
            nho=sum/10;
            ans[cs1+cs2]=sum%10;
            cs2++;
        }
        if(nho>0)
        {
            ans[cs1+cs2]+=nho;
        }
        cs1++;
    }
    int i=ans.size()-1;
    while(i>=0&&ans[i]==0)i--;
    if(i==-1)return "0";
    string s="";
    while(i>=0)
        s+=to_string(ans[i--]);


    return s;
}

string a,b;
int test;
int main()
{
    goi();
    cin>>test;
   while(test--)
    {
        cin>>a>>b;
       cout<<nhan(a,b)<<endl;
    }


    return 0;
}
