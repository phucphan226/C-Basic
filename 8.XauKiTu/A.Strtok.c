#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int len(char s[1001]){
    int kq=0;
    while(s[kq]!='\0'){
        kq+=1;
    }
    return kq;
}
char *tok(char s[], char d){
    
}
int main(){
    char s[10001]; gets(s);
    char *xau=tok(s, " ");
    while(xau!=NULL){
        printf("%s ", xau);
        tok(NULL, " ");
    }
    return 0;
}