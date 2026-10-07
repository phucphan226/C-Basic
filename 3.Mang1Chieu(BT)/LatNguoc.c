#include<stdio.h>
void ln(int a[], int n){
    for(int i=0; i<n/2; i++){
        int c=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=c;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    ln(a, n);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}