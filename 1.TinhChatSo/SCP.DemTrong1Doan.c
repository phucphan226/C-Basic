#include<stdio.h>
#include<math.h>
int main(){
    long long a, b;
    scanf("%lld%lld", &a, &b);
    long long cduoi=ceil(sqrt(a));
    long long ctren=sqrt(b);
    printf("%lld", ctren-cduoi+1);
}