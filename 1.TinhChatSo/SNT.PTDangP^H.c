#include<stdio.h>
#include<math.h>
void tsnt(long long n){
        for(long long i=2; i<=sqrt(n); i++){
        if(n%i==0){
            n=n/i;
            long long mu=1; 
            while(n%i==0){
                n=n/i;
                mu+=1;
            }
            printf("%lld^%lld ", i, mu);
            if(n!=1){
                printf(" * ");
            }
        }
    }
    if(n!=1){
        printf("%lld^1", n);
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    tsnt(n);
    return 0;
}