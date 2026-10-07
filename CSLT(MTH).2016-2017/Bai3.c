#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char a[n][1000];
    char b[n][1000];
    for(int i=0; i<n; i++){
        gets(a[i]);
    }
    for(int j=0; j<n; j++){
        gets(b[j]);
    }
    char nhap[10000];
    gets(nhap);
    for(int i=0; i<n; i++){
        if(strcmp(nhap, a[i])==0){
            printf("%s", b[i]);
        }
    }
    return 0;
}