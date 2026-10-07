#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char c[100000];
char b[10000][1000];
int main(){
    gets(c);
    char *xau=strtok(c, " ");
    int n=0;
    while(xau!=NULL){
        strcpy(b[n], xau);
        n++;
        xau=strtok(NULL, " ");
    }
    for(int i=0; i<n; i++){
        if(strcmp(b[i], " ")){
            printf("%s ", b[i]);
            int dem=1;
            for(int j=i+1; j<n; j++){
                if(strcmp(b[i], b[j])==0){
                    dem+=1;
                    strcpy(b[j], " ");
                }
            }
            printf("%d\n", dem);
        }
    }
}
