#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)

#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    


}
int main() {

    ifstream fi("DATA1.in");
    ifstream fi2("DATA2.in");
   

   string c;
    map<string,int>v;
    while (fi>>c)
    {
        f(i,0,c.size()-1)
        if(c[i]>='A'&&c[i]<='Z')c[i]+=32;
         v[c]=1;
        //fo.put(c);
    }
    while(fi2>>c)
    {
        f(i,0,c.size()-1)
        if(c[i]>='A'&&c[i]<='Z')c[i]+=32;
        if(v[c]==1)v[c]=2;
    }
    for(auto x=v.begin();x!=v.end();x++)
    {
        cout<<x->first<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        if(it->second==2)
        cout<<it->first<<" ";
    }


    fi.close();
    fi2.close();
   


    return 0;
}
