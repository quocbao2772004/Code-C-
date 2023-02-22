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
    int stt;
    string name;
    string group;
    double buying_price;
    double selling_price;
    double profit;
};


int main() {
   goi();
    int test;
    cin>>test;
    cin.ignore();
    solve s[10001];
    f(i,1,test)
    {
         getline(cin,s[i].name);
         getline(cin,s[i].group);
         cin>>s[i].buying_price;
         cin>>s[i].selling_price;
         s[i].stt=i;
         s[i].profit=s[i].selling_price-s[i].buying_price;
         cin.ignore();
    }
    f(i,1,test-1)
    {
        f(j,i+1,test)
        {
            if(s[i].profit<s[j].profit)
            {
                swap(s[i].name,s[j].name);
                swap(s[i].group,s[j].group);
                swap(s[i].buying_price,s[j].buying_price);
                swap(s[i].stt,s[j].stt);
                swap(s[i].profit,s[j].profit);
            }
        }
    }
    f(i,1,test)
    {
        cout<<s[i].stt<<" "<<s[i].name<<" "<<s[i].group<<" "<<fixed<<setprecision(2)<<s[i].profit<<endl;
    }
    return 0;
}
