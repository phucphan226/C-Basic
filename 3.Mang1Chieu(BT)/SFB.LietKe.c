#include<stdio.h>
#include<math.h>
int checkFibo(long long n){
    if(n==0||n==1){
        return 1;
    }
    else{
        long long f0=0, f1=1;
        long long fn;
        for(int i=2; i<93; i++){
            fn=f0+f1;
            f0=f1;
            f1=fn;
            if(fn==n){
                return 1;
            }
        }
    }   
    return 0;
}
int main(){
    long long n;
    scanf("%lld", &n);
    long long a[n];
    for(int i=0; i<n; i++){
        scanf("%lld ", &a[i]);
    }
    int check=0;
    for(int i=0; i<n; i++){
        if(checkFibo(a[i])==1){
            printf("%lld ", a[i]);
            check=1;
        }
    }
    if(check==0){
        printf("NONE");
    }
    return 0;
}