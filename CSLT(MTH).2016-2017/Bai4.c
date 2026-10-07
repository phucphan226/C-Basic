#include<stdio.h>
float tb(int n, int a[]){
    int tong=0;
    for(int i=0; i<n; i++){
        tong+=a[i];
    }
    return (float)tong/n;
}
int lon(int n, int a[]){
    int dem=0;
    for(int i=0; i<n; i++){
        if(a[i]>tb(n, a)){
            dem+=1;
        }
    }
    return dem;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("%.2f %d", tb(n, a), lon(n, a));
}