#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void hoten(char a[]){
    a[0]=toupper(a[0]);
    for(int i=1; i<strlen(a); i++){
        a[i]=tolower(a[i]);
    }
}
int main(){
    char c[100000];
    gets(c);
    char d[100000];
    gets(d);
    char a[10000][1000];
    int i=0; 
    char *xau=strtok(c, " ");
    while(xau!=NULL){
        hoten(xau);
        strcpy(a[i], xau);
        i++;
        xau=strtok(NULL, " ");
    }
    for(int j=0; j<i; j++){
        printf("%s ", a[j]);
    }
    printf("\n");
    char *xau1=strtok(d, "/");
    int cnt=0;
    while(xau1!=NULL){
        cnt++;
        if(strlen(xau1)==1){
            printf("0%s", xau1);
        }
        else{
            printf("%s", xau1);
        }
        if(cnt==1||cnt==2){
            printf("/");
        }
        xau1=strtok(NULL, "/");
    }
}