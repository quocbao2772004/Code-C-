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
    //fi;fo;


}
struct solve
{
    string id;
    string name;
    string Class;
    double score1;
    double score2;
    double score3;

};


int main() {
   goi();
    int n;
    cin>>n;
    cin.ignore();
    solve s[10001];
    f(i,1,n)
    {
        getline(cin,s[i].id);
         getline(cin,s[i].name);
         getline(cin,s[i].Class);
         cin>>s[i].score1;
         cin>>s[i].score2;
         cin>>s[i].score3;


         cin.ignore();
    }
    f(i,1,n-1)
    {
        f(j,i+1,n)
        {
            if(s[i].name>s[j].name)
            {
                swap(s[i].name,s[j].name);
                swap(s[i].id,s[j].id);
                swap(s[i].Class,s[j].Class);
                swap(s[i].score1,s[j].score1);
                swap(s[i].score2,s[j].score2);
                swap(s[i].score3,s[j].score3);
            }
        }
    }
    f(i,1,n)
    {
        cout<<i<<" "<<s[i].id<<" "<<s[i].name<<" "<<s[i].Class<<" "<<fixed<<setprecision(1)<<s[i].score1<<" "<<s[i].score2<<" "<<s[i].score3<<endl;
    }
    return 0;
}
