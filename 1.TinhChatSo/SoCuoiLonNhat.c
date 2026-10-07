#include<stdio.h>
#include<math.h>
int scln(int n){
    int a=n%10;
    while(n!=0){
        int b=n%10;
        if(a<b){
            return 0;
        }
        n=n/10;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", scln(n));
}