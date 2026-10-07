//Ptich dạng tích 3 thừa SNT
#include<stdio.h>
#include<math.h>
long long sphenic(long long n){
    int demi=0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            n=n/i;
            demi+=1;
            while(n%i==0){
                return 0;
            }
        }
    }
    if(n!=1){
        demi+=1;
    }
    if(demi==3){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    if(sphenic(n)==1){
        printf("1");
    }
    else{
        printf("0");
    }
}