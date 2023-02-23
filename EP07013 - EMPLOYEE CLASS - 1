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
   // fi;fo;


}
struct Employee
{
    string ten;
    string gioitinh;
    string ntns;
    string diachi;
    string mst;
    string nhd;

};
void input(Employee &a)
{
    getline(cin,a.ten);
    getline(cin,a.gioitinh);
    getline(cin,a.ntns);
    getline(cin,a.diachi);
    getline(cin,a.mst);
    getline(cin,a.nhd);
}
void xuli(string a)
{
    int count=0;
    map<int,string>c;
    stringstream ss(a);
    string token;
    while(getline(ss,token,'/'))
    {
        if(token.length()<2)
            token='0'+token;
        c[count]=token;
        count++;
    }
    f(i,0,count-1)
    {
        cout<<c[i];
        if(i<count-1)
            cout<<"/";
    }
}
void print(Employee &a)
{
    cout<<"00001 "<<a.ten<<" "<<a.gioitinh<<" ";
    xuli(a.ntns);
    cout<<" "<<a.diachi<<" "<<a.mst<<" ";
    xuli(a.nhd);

}
int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}

