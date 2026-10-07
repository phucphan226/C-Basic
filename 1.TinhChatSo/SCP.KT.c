#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int can=sqrt(n);
    if(can*can==n){
        printf("OK");
    }
    else{
        printf("NO");
    }
}