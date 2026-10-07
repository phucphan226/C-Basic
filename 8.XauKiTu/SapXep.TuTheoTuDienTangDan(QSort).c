#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int td(const void *a, const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    return strcmp(x, y);
}
int main(){
    char c[120106];
    gets(c);
    char a[100][100];
    char *xau=strtok(c, " ");
    int i=0;
    while(xau!=NULL){
        strcpy(a[i], xau);
        i++;
        xau=strtok(NULL, " ");
    }
    qsort(a, i, sizeof(a[0]), td);
    for(int j=0; j<i; j++){
        printf("%s ", a[j]);
    }
}