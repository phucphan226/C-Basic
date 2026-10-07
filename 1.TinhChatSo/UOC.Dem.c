#include<stdio.h>
#include<math.h>
int main(){
long long n;
scanf("%lld", &n);
long long demuoc=0;
for(int i=1; i<=sqrt(n); i++){
    if(n%i==0){
        demuoc+=2;
    }
    if(i*i==n){
        demuoc-=1;
    }
}
printf("%lld\n", demuoc);
return 0;
}