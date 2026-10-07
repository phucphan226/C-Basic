#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char a[][1000], char s[], int n){
    for(int i=0; i<n; i++){
        if(strstr(s, a[i])!=NULL){
            return 0;
        }
    }
    return 1;
}
int main(){
    char c[10000];
    gets(c);
    for(int i=0; i<strlen(c); i++){
        c[i]=tolower(c[i]);
    }
    int n=0;
    char a[1000][1000];
    char *xau=strtok(c, ",");
    while(xau!=NULL){
        strcpy(a[n], xau);
        n++;
        xau=strtok(NULL, ",");
    }
    char s[10000];
    while(gets(s)!=NULL){
        for(int i=0; i<strlen(s); i++){
                s[i]=tolower(s[i]);
        }
        if(check(a, s, n)==1){
            printf("accept\n");
        }
        else{
            printf("block\n");
        }
    }
    return 0;
}