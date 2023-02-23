#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("DATA.in","r",stdin)
#define fi2 freopen("DATA2.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define ll long long
#define l length()
#define PI 3.141592653589793238
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //fi;fo;

}
int a,b,c,d;
int main() {
    goi();
	int test;
	cin>>test;
	while(test--)
    {
        cin>>a>>b>>c>>d;
        int x=(a+c);
        int y=(b+d);
        int ptc=x*a-y*b;
        int pac=x*b+y*a;
        int ptd=x*x-y*y;
        int pad=2*x*y;
        //cout<<ptc<<" + "<<pac<<"i, "<<ptd<<" + "<<pad<<"i"<<endl;
        cout<<ptc<<" ";
        if(pac>=0)cout<<"+ ";
        else cout<<"- ";
        cout<<abs(pac)<<"i, "<<ptd<<" ";
        if(pad>=0)cout<<"+ ";
        else cout<<"- ";
        cout<<abs(pad)<<"i "<<endl;
    }
}
