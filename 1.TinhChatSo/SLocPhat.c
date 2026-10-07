#include<stdio.h>
#include<math.h>
long long locphat(long long n){
    while(n!=0){
    long long a=n%10;
    if(a!=0&&a!=6&&a!=8){
        return 0;
    }
    n=n/10;
    }
    return 1;
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld", locphat(n));
    return 0;
}