#include<stdio.h>
int scs(long long n){
    if(n<10){
        return 1;
    }
    else{
        return 1+scs(n/10);
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%d", scs(n));
    return 0;
}