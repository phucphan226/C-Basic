#include<stdio.h>
int main(){
    int luong;
    scanf("%d", &luong);
    float thue=0;
    if(luong<=10){
        thue+=luong;
    }
    else if(luong<=15){
        thue=(luong-10)*0.05;
    }
    else if(luong<=20){
        thue=0.05*5+0.1*(luong-15);
    }
    else{
        thue=0.05*5+0.1*5+(luong-15)*0.15;
    }
    printf("%.2f", thue);
}