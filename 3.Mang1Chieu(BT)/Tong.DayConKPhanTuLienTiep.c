#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int sum=0;
    for(int i=0; i<k; i++){
        sum+=a[i];
    }
    printf("%d ", sum);
    for(int i=1; i<=n-k; i++){
        sum=sum-a[i-1]+a[i+k-1];
        printf("%d ", sum);
    }
}