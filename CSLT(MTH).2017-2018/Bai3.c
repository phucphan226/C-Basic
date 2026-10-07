#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char a[], char b[]){
    if(strlen(a)!=strlen(b)){
        return 0;
    }
    else{
        for(int i=0; i<strlen(a); i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    char a[10000], b[10000];
    gets(a);
    gets(b);
    printf("%d", check(a, b));
    return 0;
}