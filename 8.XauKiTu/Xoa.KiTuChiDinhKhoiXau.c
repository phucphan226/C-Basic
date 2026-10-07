#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char c[120106];
    gets(c);
    int cnt=0;
    for(int i=0; i<strlen(c); i++){
        if(c[i]=='2'||c[i]=='8'||c[i]=='t'||c[i]=='e'||c[i]=='c'||c[i]=='h'){
            cnt++;
        }
        else{
            printf("%c", c[i]);
        }
    }
    if(cnt==strlen(c)){
        printf("EMPTY");
    }
}