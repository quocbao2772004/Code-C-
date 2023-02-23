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
double a1,a2,a3,b1,b2,b3;
double s,r,ans;
double ab,ac,bc;
int main() {
    goi();
	int test;
	cin>>test;
	while(test--)
    {
        bool ok=1;
        cin>>a1>>b1>>a2>>b2>>a3>>b3;
        ab=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
        bc=sqrt((a2-a3)*(a2-a3)+(b2-b3)*(b2-b3));
        ac=sqrt((a1-a3)*(a1-a3)+(b1-b3)*(b1-b3));
        if(ab<=0||ac<=0||bc<=0||(ab+bc<=ac)||(ab+ac<=bc)||(ac+bc)<=ab)
        {
            ok=0;
            cout<<"INVALID"<<endl;
        }
        if(ok)
        {
        s=sqrt((ab+ac+bc)*(ab+ac-bc)*(ab+bc-ac)*(bc+ac-ab))/4;
        r=ab*bc*ac/(4*s);
        cout<<fixed<<setprecision(3)<<PI*r*r<<endl;
        }
    }
}
