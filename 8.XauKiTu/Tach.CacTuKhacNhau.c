#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char c[100000];
    gets(c);
    char a[100][100];
    char b[100][100];
    char *xau=strtok(c, " ");
    int i=0;
    while(xau!=NULL){
        int check=1;
        for(int j=0; j<i; j++){
            if(strcmp(a[j],xau)==0){
                check=0;
                break;
            }
        }
        if(check==1){
            strcpy(a[i], xau);
            strcpy(b[i], xau);
            i++;
        }
        xau=strtok(NULL, "  ");
    }
    for(int j=0; j<i; j++){
        printf("%s ", b[j]);
    }
}