#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int tn(char c[]){
    for(int i=0; i<strlen(c)/2; i++){
        if(c[i]!=c[strlen(c)-1-i]){
            return 0;
        }
    }
    return 1;
}
int td(const void *a, const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    if(strlen(x)!=strlen(y)){
        return strlen(x)-strlen(y);
    }
    return x-y;
}
char c[100000];
char a[100000][1000];
int main(){
    gets(c);
    int i=0;
    char *xau=strtok(c, " ");
    while(xau!=NULL){
        int check=1;
        for(int j=0; j<i; j++){
            if(strcmp(a[j], xau)==0){
                check=0;
                break;
            }
        }
        if(check==1&&tn(xau)==1){
            strcpy(a[i], xau);
            i++;
        }
        xau=strtok(NULL, " ");
    }
    qsort(a, i, sizeof(a[0]), td);
    for(int j=0; j<i; j++){
        printf("%s ", a[j]);
    }
}