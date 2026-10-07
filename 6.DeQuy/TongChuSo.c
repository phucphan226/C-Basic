#include<stdio.h>
int tong(int n){
    if(n<10){
        return n;
    }
    else{
        return n%10+ tong(n/10);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", tong(n));
}