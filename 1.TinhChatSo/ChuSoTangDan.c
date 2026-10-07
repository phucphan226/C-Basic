#include<stdio.h>
#include<math.h>
int cstd(int n){
    while(n!=0){
        int a=n%10;
        n=n/10;
        int b=n%10;
        if(a<b){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n; 
    scanf("%d", &n);
    printf("%d", cstd(n));
}