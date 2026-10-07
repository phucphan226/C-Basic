#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char c[10000000];
char a[100000][1000];
int cmp(const void *a, const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    char xy[10000], yx[10000];
    strcpy(xy, x);
    strcat(xy, y);
    strcpy(yx, y);
    strcat(yx, x);
    return strcmp(yx, xy);
}
int main(){
    gets(c);
    for(int i=0; i<strlen(c); i++){
        if(isalpha(c[i])){
            c[i]=' ';
        }
    }
    int n=0;
    char *xau=strtok(c, " ");
    while(xau!=NULL){
        int index=-1;
        for(int i=0; i<strlen(xau); i++){
            if(xau[i]!='0'){
                index=i;
                break;
            }
        }
        if(index==-1){
            strcpy(a[n], "0");
            n++;
        }
        else{
            int pos=0;
            for(int i=index; i<strlen(xau); i++){
                a[n][pos]=xau[i];
                pos++;
            }
            n++;
            a[n][pos]='\0';
        }
        xau=strtok(NULL, " ");
    }
    qsort(a, n, sizeof(a[0]), cmp);
    for(int i=0; i<n; i++){
        printf("%s", a[i]);
    }
}