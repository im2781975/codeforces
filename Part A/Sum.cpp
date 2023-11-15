#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c || b+c==a || a+c==b)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}
//https://codeforces.com/problemset/problem/1742/A
