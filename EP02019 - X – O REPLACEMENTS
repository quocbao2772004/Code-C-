#include <bits/stdc++.h>
#define l length()
#define f0(i,a,b) for(int i=a;i<b;i++)
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define f2(i,a,b,k) for(int i=a;i<=b;i+=k)
#define fi freopen("Document.in","r",stdin)
#define fo freopen("PTIT.out","w",stdout)
#define ll long long
#define pb push_back
#define ft first
#define sd second
#define vi vector<int>
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //fi;fo;

}
int n,m,p;
int test;
char a[25][25];
int hang[25][25];
int cot[25][25];
void Try(int i,int j,char cur,char neww)
{
    if(i>n||i<1||j>m||j<1)return ;
    if(a[i][j]!=cur)return;
    a[i][j]=neww;
    Try(i+1,j,cur,neww);
    Try(i-1,j,cur,neww);
    Try(i,j+1,cur,neww);
    Try(i,j-1,cur,neww);
}

int main()
{
    goi();
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        f(i,1,n)
        {
            f(j,1,m)
            {
                cin>>a[i][j];
                if(a[i][j]=='O')a[i][j]='-';
            }
        }
        f(i,1,n)
        if(a[i][1]=='-')
            Try(i,1,'-','O');
        f(i,1,n)
        if(a[i][m]=='-')
            Try(i,m,'-','O');
        f(i,1,m)
        if(a[1][i]=='-')
            Try(1,i,'-','O');
        f(i,1,m)
        if(a[n][i]=='-')
            Try(n,i,'-','O');
        f(i,1,n)
        {
            f(j,1,m)
            if(a[i][j]=='-')a[i][j]='X';
        }
        f(i,1,n)
        {
            f(j,1,m)cout<<a[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;

    }
    return 0;
}
