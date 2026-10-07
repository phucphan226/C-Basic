#include<stdio.h>
int chan(long long n){
    if(n<10){
        if(n%2==0){
            return n;
        }
        else{
            return 0;
        }
    }
    else{
        if(n%10%2==0){
            return n%10+chan(n/10);
        }
        else{
            return chan(n/10);
        }
    }
}
int le(long long n){
    if(n<10){
        if(n%2!=0){
            return n;
        }
        else{
            return 0;
        }
    }
    else{
        if(n%10%2==0){
            return n%10+le(n/10);
        }
        else{
            return le(n/10);
        }
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%d\n%d", chan(n), le(n));
    return 0;
}