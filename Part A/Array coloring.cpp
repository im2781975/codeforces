// https://codeforces.com/problemset/problem/1857/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,sum=0;
    cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    if(sum%2==0)
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
    }
}
