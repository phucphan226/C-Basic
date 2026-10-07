#include<stdio.h>
#include<math.h>
long long th(long long n, long long k){
    if(k==0||n==k){
        return 1;
    }
    else{
        return th(n-1, k-1)+th(n-1, k);
    }
}
int main(){
    long long n, k;
    scanf("%lld%lld", &n, &k);
    printf("%lld", th(n, k));
}