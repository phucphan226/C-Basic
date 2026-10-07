#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int tn(int a[], int b[], int n){
    for(int i=0; i<n; i++){
        if(b[i]!=a[n-1-i]){
            return 0;
        }
    }
    return 1;
}
int coDoiXungTam(int m, int n, int a[][n]){
    for(int i=0; i<m/2; i++){
        if(tn(a[i], a[m-1-i], n)==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d", coDoiXungTam(m, n, a));
}