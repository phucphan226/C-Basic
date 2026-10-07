#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    return *x-*y;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    for(int i=0; i<n; i++){
        a[i]=a[i]*a[i];
    }
    for(int i=n-1; i>=2; i--){
        int l=0, r=i-1;
        while(l<r){
            if(a[l]+a[r]==a[i]){
                printf("YES");
                return 0;
            }
            else if(a[l]+a[r]>a[i]){
                r--;
            }
            else{
                l++;
            }
        }
    } 
    printf("NO");
}
