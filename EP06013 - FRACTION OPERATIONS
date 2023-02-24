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
   fi;fo;


}
struct Fraction
{
    ll tuso;
    ll mauso;
};
void read_input(Fraction &a)
{
    cin>>a.tuso>>a.mauso;
}
void process(Fraction &a,Fraction &b)
{
    ll mau=a.mauso/__gcd(a.mauso,b.mauso)*b.mauso;
    ll tuso=(mau/a.mauso)*a.tuso+(mau/b.mauso)*b.tuso;
    ll ucln1=__gcd(mau,tuso);
    ll x=tuso/ucln1;
    ll y=mau/ucln1;
    //cout<<mau<<" "<<tuso<<endl;
    x*=x;y*=y;
    cout<<x<<"/"<<y<<" " ;

    ll mau2=a.mauso*b.mauso*y;
    ll tu2=a.tuso*b.tuso*x;
    ll z=__gcd(tu2,mau2);
    cout<<tu2/z<<"/"<<mau2/z<<endl;
}
string name;
string id;
ll lcb,heso;
int T;
int main() {
	int t;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}



