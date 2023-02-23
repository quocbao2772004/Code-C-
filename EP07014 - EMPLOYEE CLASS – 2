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
string name;
ll lcb,snl;
string position;
int main(){
    //goi();
    getline(cin,name);
    cin>>lcb>>snl>>position;
    cout<<"NV01"<<" "<<name<<" ";
    ll lht=lcb*snl;
    ll lt=0;
    if(snl>=25)lt=lht*20/100;
    else if(snl>=22&&snl<=25)lt=lht*10/100;
    cout<<lht<<" "<<lt<<" ";
    ll qht=0;
    if(position=="GD")qht=250000;
    else if(position=="PGD")qht=200000;
    else if(position=="TP")qht=180000;
    else if(position=="NV")qht=150000;
    cout<<qht<<" "<<lht+lt+qht;
    return 0;
}

