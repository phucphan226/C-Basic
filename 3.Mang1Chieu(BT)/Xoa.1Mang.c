#include<stdio.h>
#include<math.h>
int main(){
    int n, k, h;
    scanf("%d%d%d", &n, &k, &h);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(h>n-k){
        h=n-k;
    }
    for(int i=k; i<n-h; i++){
        a[i]=a[i+h];
    }
    n=n-h;
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}