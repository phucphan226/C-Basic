#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char a[100000][1000];
char c[10000000];
int gd(const void *a, const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    if(strlen(x)==strlen(y)){
        return strcmp(y, x);
    }
    else{
        return strlen(y)-strlen(x);
    }
}
int main(){
    gets(c);
    int n=0;
    for(int i=0; i<strlen(c); i++){
        if(isalpha(c[i])){
            c[i]=' ';
        }
    }
    char *xau=strtok(c, " ");
    while(xau!=NULL){
        int index=-1;
        for(int i=0; i<strlen(xau); i++){
            if(xau[i]!='0'){
                index=i;
                break;
            }
        }
        if(index==(-1)){
            strcpy(a[n], "0");
            n++;
        }
        else{
            int pos=0;
            for(int i=index; i<strlen(xau); i++){
                a[n][pos]=xau[i];
                pos++;
            }
            a[n][pos]='\0';
            n++;
        }
        xau=strtok(NULL, " ");
    }
    qsort(a, n, sizeof(a[0]), gd);
    printf("%s", a[0]);
}