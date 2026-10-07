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
    char c[10000];
    gets(c);
    char a[1000][100];
    char b[1000][100];
    int m=0, n=0;
    char *xau=strtok(c, " ");
    while(xau!=NULL){
        strcpy(b[n], xau);
        n++;
        int check=1;
        for(int i=0; i<m; i++){
            if(strcmp(a[i], xau)==0){
                check=0;
                break;
            }
        }
        if(check==1){
            strcpy(a[m], xau);
            m++;
        }
        xau=strtok(NULL, " ");
    }
    qsort(a, m, sizeof(a[0]), td);
    for(int i=0; i<m; i++){
        int dem=0;
        for(int j=0; j<n; j++){
            if(strcmp(a[i], b[j])==0){
                dem++;
            }
        }
        printf("%s %d\n", a[i], dem);
    }
    return 0;
}