#include<stdio.h>
#include<math.h>
int snt(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int main(){
    long long n;
    scanf("%lld", &n);
    for(int i=2; i<=sqrt(n); i++){
        if(snt(i)==1){
            printf("%lld ", 1ll*i*i);
        }
    }
    return 0;
}