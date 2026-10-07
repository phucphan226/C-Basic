#include<stdio.h>
//ucln(a. b)=ucln(b, a%b)
int ucln(int a, int b){
        while(b!=0){
           int c=a%b;
           a=b;
           b=c;
        }
    return a;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", ucln(a, b));
}
