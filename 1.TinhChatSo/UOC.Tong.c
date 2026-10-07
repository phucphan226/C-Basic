#include<stdio.h>
#include<math.h>
long long tonguoc(long long n){
    long long tonguoc=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            tonguoc+=n/i+i;
            if(i*i==n){
            tonguoc-=i;
            }
        }
    }

    return tonguoc;
}
int main(){
long long n;
scanf("%lld", &n);
printf("%lld", tonguoc(n));
}