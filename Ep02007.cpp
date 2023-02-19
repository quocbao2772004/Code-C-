#include <bits/stdc++.h>
using namespace std;
int a[100005],i,n,k;

void solve(int n, int k)
{
   multiset<int,greater<int> > v(a,a+k);
   /*multiset<int>::iterator it;
   for(it=v.begin();it!=v.end();it++)cout<<*it<<" ";
   cout<<endl;*/
   for(int i=k;i<n;++i)
   {
      cout<<*v.begin()<<' ';
      v.erase(v.find(a[i-k]));
      v.insert(a[i]);
    }
    cout<<*v.begin();
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        cin>>n>>k;
    for(i=0;i<n;i++) cin>>a[i];
    solve(n,k);
    cout<<endl;
    }
    
    return 0;
}
