#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int ham1(int a[], int x, int n){
    int pos=-1;
    int l=0, r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            pos=m;
            r=m-1;
        }
        else if(a[m]>x){
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return pos;
}
int ham2(int a[], int x, int n){
    int pos=-1;
    int l=0, r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            pos=m;
            l=m+1;
        }
        else if(a[m]>x){
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return pos;
}
int ham3(int a[], int x, int n){
    if(ham1(a, x, n)==-1||ham2(a, x, n)==-1){
        return 0;
    }
    else{
        return ham2(a, x, n)-ham1(a, x, n)+1;
    }
}
int main(){
    int n, x;
    scanf("%d%d", &n, &x);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d\n", ham1(a, x, n));
    printf("%d\n", ham2(a, x, n));
    printf("%d\n", ham3(a, x, n));
}