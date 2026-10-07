#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void thuong(char a[]){
    for(int i=0; i<strlen(a); i++){
        a[i]=tolower(a[i]);
    }
}
int tangdan(const void *a, const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    return strcmp(x, y);
}
int main(){
    char c[10000];
    gets(c);
    int a[100][100];
    int i=0;
    char *xau=strtok(c, " ");
    while(xau!=NULL){
        thuong(xau);
        strcpy(a[i], xau);
        i++;
        xau=strtok(NULL, " ");
    }
    qsort(a, i, sizeof(a[0]), tangdan);
    int dem=1;
    for(int j=0; j<i-1; j++){
        if(strcmp(a[j], a[j+1])!=0){
            dem+=1;
        }
    }
    printf("%d", dem);
}