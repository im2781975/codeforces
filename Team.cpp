/* 3
1 1 0
1 1 1
1 0 0 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int w=0;
    while(n--)
    {
        int cnt=0;
        int arr[3];
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            cnt++;
        }
        if(cnt>=2)
         w++;
    }
cout<<w;
}
