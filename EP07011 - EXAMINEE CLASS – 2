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
string name,id;

double s1,s2,s3;
int main() {
    goi();
    map<int,string>c;
    int count=0;
    getline(cin,id);
	getline(cin,name);
    cin>>s1>>s2>>s3;
	double tong=s1*2+s2+s3;
	double tongbd=tong;
	if(id[2]=='1')tong+=0.5;
	else if(id[2]=='2')tong+=1;
	else if(id[2]=='3')tong+=2.5;
	cout<<id<<" "<<name<<" ";
	if(id[2]=='1')cout<<0.5;
	else if(id[2]=='2')cout<<1;
	else if(id[2]=='3')cout<<2.5;
	cout<<" "<<tongbd<<" ";
	if(tong>=24)cout<<"PASSED";
	else cout<<"FAILED";


}
