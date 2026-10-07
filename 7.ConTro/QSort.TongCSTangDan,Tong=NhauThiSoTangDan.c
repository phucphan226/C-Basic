#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int tongcs(int n){
    int tong=0; 
    while(n!=0){
        tong+=n%10;
        n=n/10;
    }
    return tong;
}
int check(const void *a, const void *b){
    int *x=(int *)a;
    int *y=(int *)b;
    if(tongcs(*x)==tongcs(*y)){
        return *x-*y;
    }
    else{
        return tongcs(*x)-tongcs(*y);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), check);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}