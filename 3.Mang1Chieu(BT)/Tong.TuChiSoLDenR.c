#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    int n, q;
    scanf("%d%d", &n, &q);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    long long f[n];
    for(int i=0; i<n; i++){
        if(i==0){
            f[0]=a[0];
        }
        else{
            f[i]=f[i-1]+a[i];
        }
    }
    for(int i=1; i<=q; i++){
        int l, r;
        scanf("%d%d", &l, &r);
        l--;
        r--;
        if(l==0){
            printf("%lld\n", f[r]);
        }
        else{
        printf("%lld\n", f[r]-f[l-1]);
        }
    }
}