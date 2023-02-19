#include<bits/stdc++.h>
#define ll long long
using namespace std;
void goi()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int days,weeks,years;
int main()
{
    goi();
    cin>>days;
    years=days/365;
    days=days-years*365;
    weeks=days/7;
    days=days-weeks*7;
    cout<<years<<" "<<weeks<<" "<<days;
    

    return 0;
}
