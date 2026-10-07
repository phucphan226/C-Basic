#include<stdio.h>
int linearSearch(int a[], int n, int x){
    int kq=-1;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            kq=i;
            break;
        }
    }
    return kq;
}
int main(){
    int n, x;
    scanf("%d%d", &n, &x);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", linearSearch(a, n, x));
}