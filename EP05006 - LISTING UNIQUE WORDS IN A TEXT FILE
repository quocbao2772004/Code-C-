#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("DOCUMENT.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define l length()
#define ll long long
using namespace std;

void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fi;//fo;

}

map<string,int>c;
void tach(string s)
{
          //for (int i = 0; i< s.size(); i++)
            for(int i=0;i<s.length();i++)
        {
            size_t x=s.find_first_of(",.?!:;-/()–");
            while(x!=string ::npos)
            {
                s[x]=' ';
                x=s.find_first_of(",.?!:;-/()–",x+1);
            }
        }
        stringstream ss(s);
		while (ss >> s)
		{
		for (int i = 0; i < s.length(); i++)
			s[i] = tolower(s[i]); c[s]++;
	    }
}
int main()
{
   //goi();
   ifstream filein;
	filein.open("DOCUMENT.in");
	string s[1001];
	int n;
	 filein >> n;
	 int i = 0;
	 while (!filein.eof())
	  {
		getline(filein, s[i]);
		 tach(s[i]); i++;
	  } filein.close();

    vector<pair<string,int>>v(c.begin(),c.end());
    sort(v.begin(),v.end(),[](auto a,auto b)
    {
        if(a.second!=b.second)
            return a.second>b.second;
        else return a.first<b.first;
    });
    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
