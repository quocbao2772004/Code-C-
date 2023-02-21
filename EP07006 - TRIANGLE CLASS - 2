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

double a,b,c,d,e,f;
int n,m,p;
int test;
int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c>>d>>e>>f;
        double ab=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        double ac=sqrt((a-e)*(a-e)+(b-f)*(b-f));
        double bc=sqrt((e-c)*(e-c)+(f-d)*(f-d));
        if(ab==0||ac==0||bc==0||ab+ac<=bc||ab+bc<=ac||bc+ac<=ab){cout<<"INVALID"<<endl;}
        else
        {
            double p=ab+bc+ac;
            double ans=sqrt(p*(p-2*ab)*(p-2*bc)*(p-2*ac))/4;
            cout<<fixed<<setprecision(2)<<ans<<endl;
        }
    }



    return 0;
}
