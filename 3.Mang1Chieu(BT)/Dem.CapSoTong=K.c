#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    return *x-*y;
}
int first(int a[], int l, int r, int x){
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            res=m;
            r=m-1;
        }
        else if(a[m]>x){
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return res;
}
int last(int a[], int l, int r, int x){
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            res=m;
            l=m+1;
        }
        else if(a[m]>x){
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return res;
}
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    long long dem=0;
    for(int i=0; i<n-1; i++){
        int p=last(a, i+1, n-1, k-a[i]), h=first(a, i+1, n-1, k-a[i]);
        if(h!=-1){
            dem+=p-h+1;
        }
    }
    printf("%lld", dem);
    return 0;
}