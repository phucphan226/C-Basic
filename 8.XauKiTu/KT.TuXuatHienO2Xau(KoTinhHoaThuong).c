#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char s[100000];
    char t[100000];
    gets(s);
    gets(t);
    for(int i=0; i<strlen(s); i++){
        if(isupper(s[i])==1){
            s[i]=tolower(s[i]);
        }
    }
    for(int i=0; i<strlen(t); i++){
        if(isupper(t[i])==1){
            t[i]=tolower(t[i]);
        }
    }
    int a[1000][100];
    int b[1000][100];
    int m=0, n=0;
    char *xau1=strtok(s, " ");
    while(xau1!=NULL){
        int check=1;
        for(int i=0; i<n; i++){
            if(strcmp(xau1, a[i])==0){
                check=0;
                break;
            }
        }
        if(check==1){
            strcpy(a[n], xau1);
            n++;
        }
        xau1=strtok(NULL, " ");
    }
    char *xau2=strtok(t, " ");
    while(xau2!=NULL){
        int check=1;
        for(int i=0; i<m; i++){
            if(strcmp(xau2, b[i])==0){
                check=0;
                break;
            }
        }
        if(check==1){
            strcpy(b[m], xau2);
            m++;
        }
        xau2=strtok(NULL, " ");
    }
    int check=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(strcmp(a[i], b[j])==0){
                check=1;
                printf("%s ", a[i]);
                break;
            }
        }
    }
    if(check==0){
        printf("NOT FOUND");
    }
    return 0;
}