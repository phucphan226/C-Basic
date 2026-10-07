//n>=0
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int tangdan(const void *a, const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    return *x-*y;
}
int main(){
    char c[1000];
    gets(c);
    qsort(c, strlen(c), sizeof(char), tangdan);
    if(strlen(c)==1){
        printf("%s", c);
    }
    else{
        for(int i=0; i<strlen(c); i++){
            if(c[i]=='0'){
                continue;
            }
            else{
                printf("%c", c[i]);
            }
        }
    }
}