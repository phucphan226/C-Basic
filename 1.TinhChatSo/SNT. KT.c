#include<stdio.h>
#include<math.h>
long long snt(long long n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int main(){
    long long n;
    scanf("%lld", &n);
    snt(n);
    if(snt(n)==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}