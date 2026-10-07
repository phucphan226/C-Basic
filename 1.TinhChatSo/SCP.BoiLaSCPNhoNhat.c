#include<stdio.h>
#include<math.h>
long long pt(int n){
    long long ans=n;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            int mu=0;
            while(n%i==0){
                mu++;
                n/=i;
            }
            if(mu%2!=0){
                ans*=i;
            }
        }
    }
    if(n>1){
        ans*=n;
    }
    return ans;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", pt(n));
    return 0;
}