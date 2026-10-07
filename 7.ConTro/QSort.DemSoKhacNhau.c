#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int tangdan(const void *a, const void *b){
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
    qsort(a, n, sizeof(int), tangdan);
    int dem=1;
    for(int i=0; i<n-1; i++){
        if(a[i]!=a[i+1]){
            dem+=1;
        }
    }
    printf("%d", dem);
}