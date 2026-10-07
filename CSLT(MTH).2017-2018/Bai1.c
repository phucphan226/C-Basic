#include<stdio.h>
int main(){
    int sl;
    scanf("%d", &sl);
    if(sl>=1&&sl<=10){
        printf("0%%");
    }
    else if(sl<=24){
        printf("5%%");
    }
    else if(sl<=50){
        printf("10%%");
    }
    else{
        printf("15%%");
    }
}