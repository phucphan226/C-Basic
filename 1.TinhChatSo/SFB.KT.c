#include<stdio.h>
#include<math.h>
long long checkFibo(long long n){
    if(n==0||n==1){
        return 1;
    }
    long long f0=0, f1=1, fn;
    for(long long i=2; i<93; i++){
        fn=f0+f1;
        f0=f1;
        f1=fn;
        if(fn==n){
        return 1;
        }
    }
    return 0;
}
int main(){
    printf("%d", checkFibo(4181));
}