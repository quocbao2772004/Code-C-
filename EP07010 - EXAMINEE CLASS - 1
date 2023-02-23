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
string name;
string dob;
double s1,s2,s3;
int main() {
    goi();
    map<int,string>c;
    int count=0;
	getline(cin,name);
	getline(cin,dob);
	cin>>s1>>s2>>s3;
	double tong=s1+s2+s3;
	stringstream ss(dob);
	string token;
	while(getline(ss,token,'/'))
    {
        if(token.l<2)token='0'+token;
        c[count++]=token;
    }
	cout<<name<<" ";
	f(i,0,count-1)
	{
	    cout<<c[i];
	    if(i!=count-1)cout<<'/';
	}
	cout<<" "<<fixed<<setprecision(1)<<tong;
}
