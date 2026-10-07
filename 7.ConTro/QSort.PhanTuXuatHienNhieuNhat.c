#include<stdio.h>
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
    int max=-1e9;
    int icheck=-1;
    for(int i=0; i<n-1; i++){
        int dem=1;
        while(a[i]==a[i+1]&&(i+1)<n){
            dem++;
            i++;
        }
        if(dem>max){
            max=dem;
            icheck=i;
        }
    }
    printf("%d", a[icheck]);
    return 0;
}