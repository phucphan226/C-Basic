#include<stdio.h>
#include<math.h>
long long scp(long long n){
    long long can=sqrt(n);
    if(can*can==n){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    long long a, b;
    scanf("%lld%lld", &a, &b);
    for(long long i=ceil(sqrt(a)); i<=sqrt(b); i++){
        if(scp(i*i)==1){
            printf("%lld ", i*i);
        }
    }
}