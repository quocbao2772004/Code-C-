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
    int hour;
    int minute;
    int second;

};


int main()
{
    goi();
    int n;
    cin>>n;

    solve s[10001];
    f(i,1,n)
    {
        cin>>s[i].hour>>s[i].minute>>s[i].second;

    }
    f(i,1,n-1)
    {
        f(j,i+1,n)
        {
            if(s[i].hour>s[j].hour)
            {
                swap(s[i].hour,s[j].hour);
                swap(s[i].minute,s[j].minute);
                swap(s[i].second,s[j].second);
            }
            else if(s[i].hour==s[j].hour)
            {
                if(s[i].minute>s[j].minute)
                {
                    swap(s[i].hour,s[j].hour);
                    swap(s[i].minute,s[j].minute);
                    swap(s[i].second,s[j].second);
                }
                else if(s[i].minute==s[j].minute)
                {
                    if(s[i].second>s[j].second)
                    {
                        swap(s[i].hour,s[j].hour);
                        swap(s[i].minute,s[j].minute);
                        swap(s[i].second,s[j].second);
                    }
                }
            }
        }
    }
    f(i,1,n)
    {
        cout<<s[i].hour<<" "<<s[i].minute<<" "<<s[i].second<<endl;
    }
    return 0;
}
