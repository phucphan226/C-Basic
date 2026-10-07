#include<stdio.h>
int check(int a[], int n){
    if(n==1){
        if(a[n-1]%2==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(n>0){
        if(a[n-1]%2!=0){
            return 0;
        }
        else{
            check(a, n-1);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(check(a, n)==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}