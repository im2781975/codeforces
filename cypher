/* https://codeforces.com/problemset/problem/1703/C */
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n, i, p, j;
        scanf("%d", &n);
        int arr[n+9];
        char str[100], s[105], st[100];
        for(i=0; i<n; i++){
            scanf("%d", &arr[i]);

        }
        for(j=0; j<n; j++){
            scanf("%d%s", &p, str);

            for(i=0; i<p; i++){
                if(str[i] == 'U'){
                    arr[j] = arr[j]-1;
                }
                else if(str[i] == 'D')
                    arr[j] = arr[j]+1;
                arr[j] = (arr[j]+10)%10;
               // printf("%d ", arr[i]);
            }


        }
        for(i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
