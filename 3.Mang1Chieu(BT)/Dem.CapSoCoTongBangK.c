#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int dem=0;
int cnt[10000];
int cmp(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    return *x-*y;
}
int dk(int n, int a[], int k){
    int check=1;
    for(int i=1; i<n; i++){
        if(a[i]!=a[i-1]){
            check=0;
            break;
        }
    }
    if(check==1){
        return n*(n-1)/2;
    }
    else{
        for(int i=0; i<n; i++){
            dem+=cnt[k-a[i]];
            cnt[k-a[i]]=0;
        }
        return dem;
    }
}
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    qsort(a, n, sizeof(int), cmp);
    printf("%d", dk(n, a, k));
    return 0;a
}