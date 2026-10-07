#include<stdio.h>
int tn(int n){
    int b=0, c=n;
    if(n<0){
        return 0;
    }
    while(n!=0){
        b=b*10+n%10;
        n/=10;
    }
    if(c==b){
        printf("OK");
    }
    else{
        printf("NO");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    tn(n);
}
