#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int b[1000];
    int m=0;
    for(int i=0; i<n-1; i++){
        if(a[i]!=a[i+1]){
            b[m]=a[i];
            m++;
        }
    }
    b[m]=a[n-1];
    for(int i=0; i<=m; i++){
        printf("%d ", b[i]);
    }
}