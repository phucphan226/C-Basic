#include<stdio.h>
#include<math.h>
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n], b[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(k>n){
        k=k%n;
    }
    for(int i=0; i<=(n-1-k); i++){
        b[i]=a[i+k];
    }
    for(int i=(n-k); i<=(n-1); i++){
        b[i]=a[i+k-n];
    }
    for(int i=0; i<n; i++){
        printf("%d ", b[i]);
    }
}