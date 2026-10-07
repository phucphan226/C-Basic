#include<stdio.h>
void decToHex(long long n){
    if(n<16){
        if(n%16<10){
            printf("%d", n%16);
        }
        else if(n%16==10){
            printf("A");
        }
        else if(n%16==11){
            printf("B");
        }
        else if(n%16==12){
            printf("C");
        }
        else if(n%16==13){
            printf("D");
        }
        else if(n%16==14){
            printf("E");
        }
        else if(n%16==15){
            printf("F");
        }
        return;
    }
    else{
        decToHex(n/16);
        if(n%16<10){
            printf("%d", n%16);
        }
        else if(n%16==10){
            printf("A");
        }
        else if(n%16==11){
            printf("B");
        }
        else if(n%16==12){
            printf("C");
        }
        else if(n%16==13){
            printf("D");
        }
        else if(n%16==14){
            printf("E");
        }
        else if(n%16==15){
            printf("F");
        }
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    decToHex(n);
    return 0;
}