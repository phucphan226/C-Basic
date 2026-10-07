#include<stdio.h>
long long ucln(long long a, long long b){
    if(b==0){
        return a;
    }
    else{
        ucln(b, a%b);
    }
}
long long bcnn(long long a, long long b){
    return (a/ucln(a, b))*b;
}
int main(){
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld %lld", ucln(a, b), bcnn(a, b));
    return 0;
}