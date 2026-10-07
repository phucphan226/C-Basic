#include<stdio.h>
#include<math.h>
int main(){
    int songuoi;
    for(int i=0; ; i++){
        if(songuoi<0||songuoi>5){
            break;
        }
        else{
            if(songuoi==0){
                printf("43")
            }
            else if(songuoi==1){
                printf("35");
            }
            else if(songuoi==2){
                printf("24");
            }
            else if(songuoi==3){
                printf("11");
            }
            else if(songuoi==4){
                printf("5");
            }
            else{
                printf("7");
            }
        }
    }
}