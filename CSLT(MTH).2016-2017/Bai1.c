#include<stdio.h>
#include<math.h>
int bintodec(long long n){
    int dec=0;
    int i=0;
    while(n!=0){
        int a=n%10;
        dec+=a*pow(2, i);
        i++;
        n=n/10;
    }
    return dec;
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%d", bintodec(n));
}