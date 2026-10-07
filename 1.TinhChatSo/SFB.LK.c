#include<stdio.h>
#include<math.h>
void lkFibo(long long n){
    if(n==1){
        printf("0");
    }
    else if(n==2){
        printf("0 1");
    }
    else{
        printf("0 1 ");
        long long f0=0, f1=1;
        for(int i=2; i<=n-1; i++){
            long long fn=f0+f1;
            printf("%lld ", fn);
            f0=f1;
            f1=fn;
        }
    }
}
int main(){
    int n;
    lkFibo(20);
}
