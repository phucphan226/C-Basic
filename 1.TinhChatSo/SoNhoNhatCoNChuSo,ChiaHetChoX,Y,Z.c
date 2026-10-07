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
    long long x, y, z, n;
    scanf(" %lld %lld %lld %lld", &x, &y, &z, &n);
    long long h=bcnn(bcnn(x, y), z);
    long long bd=pow(10, n-1);
    long long kq=ceil((double)bd/h)*h;
    if(kq<pow(10, n)){
    printf(" %lld", kq);
    return 0;
    }
    printf("-1");
}

