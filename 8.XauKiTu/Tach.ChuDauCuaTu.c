#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char duong[1000][80];
char c[1000][80];
void td(char duong[][80], int n){
    for(int i=0; i<n; i++){
        gets(duong[i]);
    }
}
void tach(char duong[][80], int n){
    for(int i=0; i<n; i++){
        int j=0;
        char *xau=strtok(duong[i], " ");
        while(xau!=NULL){
            c[i][j]=toupper(xau[0]);
            j++;
            xau=strtok(NULL, " ");
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    td(duong, n);
    tach(duong, n);
    for(int i=0; i<n; i++){
        printf("%s\n", c[i]);
    }
}