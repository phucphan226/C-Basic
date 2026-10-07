//bcnn(a, b)=a/ucln(a, b)*b
#include<stdio.h>
#include<math.h>
long long ucln(long long a, long long b){
    while(b!=0){
        long long c=a%b;
        a=b;
        b=c;
    }
    return a;
}
long long bcnn(long long a, long long b){
    return a/ucln(a, b)*b;
}
int main(){
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld", bcnn(a, b));
}