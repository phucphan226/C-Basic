#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int b[100000];
    int m=0;
    for(int i=0; i<n; i++){
        if(a[i]!=28){
            b[m]=a[i];
            m++;
        }
    }
    if(m==0){
        printf("EMPTY");
    }
    else{
        for(int i=0; i<m; i++){
            printf("%d ", b[i]);
        }
    }
}