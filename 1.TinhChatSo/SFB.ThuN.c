#include<stdio.h>
#include<math.h>
long long fibo(long long n){
    if(n==0|n==1){
        return n;
    }
    else{
        long long f0=0, f1=1, fn;
        for(int i=2; i<=n-1; i++){
            fn=f0+f1;
            f0=f1;
            f1=fn;
        }
        return fn;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", fibo(n));
}