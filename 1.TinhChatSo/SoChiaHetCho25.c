//2 so cuoi la 0 hoac 2 so cuoi chia het cho 25
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char c[]){
    int a=10*(c[strlen(c)-2]-'0')+c[strlen(c)-1]-'0';
    if(c[strlen(c)-1]=='0'&&c[strlen(c)-2]=='0'||a%25==0){
        return 1;
    }
    return 0;
}
int main(){
    char c[10000];
    gets(c);
    if(strlen(c)==1){
        if(strcmp(c, "0")==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        if(check(c)==1){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}