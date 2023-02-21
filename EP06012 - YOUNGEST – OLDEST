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
struct solve
{
    string name;
    int ngay;
    int thang;
    int nam;
};
string s;
int n,m;

int test;
int main()
{
    goi();
    struct solve z[1001];
    cin>>n;
    cin.ignore();
    int co=0;
    map<int,string>c;
    f(i,1,n)
    {
        cin>>z[i].name;
        cin>>s;
        stringstream ss(s);
        string token;
        co=0;
        while(getline(ss,token,'/'))
        {
            // cout<<token<<endl;
            co++;
            int so;
            stringstream ss1;
            ss1<<token;
            ss1>>so;
            ss1.clear();
            switch(co)
            {
            case 1:
            {
                z[i].ngay=so;
            }
            break;
            case 2:
            {
                z[i].thang=so;
            }
            break;
            case 3:
            {
                z[i].nam=so;
            }
            break;
            }
        }


        ss.clear();
        //cout<<z[i].name<<endl;
    }
    f(i,1,n-1)
    {
        f(j,i+1,n)
        {
            //cout<<z[i].name<<" "<<z[i].ngay<<" "<<z[i].thang<<" "<<z[i].nam<<endl;
            if(z[i].nam>z[j].nam)
            {
                swap(z[i].nam,z[j].nam);
                swap(z[i].thang,z[j].thang);
                swap(z[i].ngay,z[j].ngay);
                swap(z[i].name,z[j].name);
            }
            else if(z[i].nam==z[j].nam)
            {
                if(z[i].thang>z[j].thang)
                {
                    swap(z[i].thang,z[j].thang);
                    swap(z[i].ngay,z[j].ngay);
                    swap(z[i].name,z[j].name);
                }
                else if(z[i].thang==z[j].thang)
                {
                    if(z[i].ngay>z[j].ngay)
                    {
                        swap(z[i].ngay,z[j].ngay);
                        swap(z[i].name,z[j].name);
                    }
                }
            }
        }

    }
   cout<<z[n].name<<endl<<z[1].name;
    return 0;
}
