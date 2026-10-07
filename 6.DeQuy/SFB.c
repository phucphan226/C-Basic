#include<stdio.h>
#include<math.h>
long long fb(long long n){
    if(n==1||n==2){
        return n-1;
    }
    else{
        return fb(n-1)+fb(n-2);
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld", fb(n));
}