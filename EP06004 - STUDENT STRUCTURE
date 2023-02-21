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
 struct Student
 {
     string name;
     string lop;
     string ntns;
     double gpa;

 };
 void input(Student &a)
 {
     getline(cin,a.name);
     getline(cin,a.lop);
     getline(cin,a.ntns);
     cin>>a.gpa;

 }
 void print( Student &a)
 {
     map<int,string>c;
     int count=0;
     //int count=0;
     stringstream ss(a.ntns);
     string token;
     while(getline(ss,token,'/'))
     {
         if(token.length()<2)token='0'+token;
         c[count]=token;count++;
     }
     cout<<"B20DCCN001 "<<a.name<<" "<<a.lop<<" ";
     for(int i=0;i<=count-1;i++)
     {
         cout<<c[i];
         if(i<count-1)cout<<"/";
     }

     cout<<" "<<fixed<<setprecision(2)<<a.gpa;
 }
int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}

