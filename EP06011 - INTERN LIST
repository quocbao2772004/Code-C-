#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("DATA.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define l length()
#define ll long long
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
    string email;
    string corporation;
    int stt;
};
ll n,m;

solve a[10001];
int q;
int main()
{
    goi();
    cin>>n;
    cin.ignore();
    f(i,1,n)
    {
        getline(cin,a[i].id);
        getline(cin,a[i].name);
        getline(cin,a[i].Class);
        getline(cin,a[i].email);
        getline(cin,a[i].corporation);
        a[i].stt=i;
    }
    f(i,1,n-1)
    {
        f(j,i+1,n)
        {
            if(a[i].id>a[j].id)
            {
                swap(a[i].id,a[j].id);
                swap(a[i].name,a[j].name);
                swap(a[i].Class,a[j].Class);
                swap(a[i].email,a[j].email);
                swap(a[i].corporation,a[j].corporation);
                swap(a[i].stt,a[j].stt);
            }
        }
    }
   /* f(i,1,n)
    {
        cout<<i<<" "<<a[i].id<<" "<<a[i].name<<" "<<a[i].Class<<" "<<a[i].email<<" "<<a[i].corporation<<endl;

    }*/
    string s;
    cin>>q;
    f(k,1,q)
    {
        cin>>s;
        f(i,1,n)
        {
            if(a[i].corporation==s)
            {
                cout<<a[i].stt<<" "<<a[i].id<<" "<<a[i].name<<" "<<a[i].Class<<" ";
                cout<<a[i].email<<" "<<s<<endl;
            }
        }
    }
    return 0;
}


