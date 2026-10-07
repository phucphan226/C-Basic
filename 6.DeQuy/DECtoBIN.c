#include<stdio.h>
void bin(long long n){
    if(n<2){
        printf("%d", n%2);
    }
    else{
        bin(n/2);
        printf("%d", n%2);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    bin(n);
}