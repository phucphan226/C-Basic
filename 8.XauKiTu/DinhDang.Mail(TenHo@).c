#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void thuong(char c[]){
    for(int i=0; i<strlen(c); i++){
        if(isupper(c[i])){
            c[i]=tolower(c[i]);
        }
    }
}
int mark[1000000];
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    for(int i=1; i<=n; i++){
        char c[1000000];
        gets(c);
        thuong(c);
        char a[1000][100];
        int n=0;
        char *xau=strtok(c, " ");
        while(xau!=NULL){
            strcpy(a[n], xau);
            n++;
            xau=strtok(NULL, " ");
        }
        printf("%s", a[n-1]);
        for(int i=0; i<=n-2; i++){
            printf("%s", a[i]);
        }
        printf("@28tech.com.vn");
        printf("\n");
    }
    return 0;
}