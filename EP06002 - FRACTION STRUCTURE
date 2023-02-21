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
struct Fraction
{
    long long tuso;
    long long mauso;

};
void input(Fraction &a)
{
    cin>>a.tuso>>a.mauso;
}
void simplify(Fraction &a)
{
    ll x=__gcd(a.tuso,a.mauso);
    a.tuso/=x;
    a.mauso/=x;
}
void print(Fraction &a)
{
    cout<<a.tuso<<"/"<<a.mauso;
}
int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}

