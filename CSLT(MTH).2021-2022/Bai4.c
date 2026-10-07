#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void dk(char a[]){
    a[0]=toupper(a[0]);
    for(int i=1; i<strlen(a); i++){
        a[i]=tolower(a[i]);
    }
}
int main(){
    char a[100000];
    gets(a);
    char *xau=strtok(a, " ");
    while(xau!=NULL){
        dk(xau);
        printf("%s ", xau);
        xau=strtok(NULL, " ");
    }
}