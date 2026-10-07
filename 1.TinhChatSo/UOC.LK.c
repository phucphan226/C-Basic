#include<stdio.h>
#include<math.h>
int main(){
long long n;
scanf("%lld", &n);
for(long long i=1; i<=sqrt(n); i++){
    if(n%i==0){
        printf("%lld ", i);
    }
    }
for(long long i=sqrt(n); i>=1; i--){
    if(n%i==0&&i*i!=n){
        printf("%lld ", n/i);
    }
}
return 0;
}