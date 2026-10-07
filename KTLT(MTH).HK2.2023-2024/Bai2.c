#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int res=0;
    for(int i=0; i<n; i++){
        res+=a[i][i]+a[i][n-1-i];
    }
    printf("%d", res);
    return 0;
}