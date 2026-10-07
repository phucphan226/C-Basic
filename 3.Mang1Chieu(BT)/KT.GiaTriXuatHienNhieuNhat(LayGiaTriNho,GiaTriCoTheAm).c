#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
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
    int max=-1e9;
    int icheck=-1;
    for(int i=0; i<n; i++){
        int dem=1;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                dem++;
            }
            else{
                break;
            }
        }
        if(dem>max){
            max=dem;
            icheck=i;
        }
    }
    printf("%d %d", a[icheck], max);
}
