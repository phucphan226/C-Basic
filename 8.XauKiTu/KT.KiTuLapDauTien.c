#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int check[255];
int main(){
    char c[120106];
    gets(c);
    for(int i=0; i<strlen(c); i++){
        check[c[i]]=0;
    }
    for(int i=0; i<strlen(c); i++){
        if(check[c[i]]==1){
            printf("%c", c[i]);
            return 0;
        }
        else{
            check[c[i]]=1;
        }
    }
    printf("NONE");
}