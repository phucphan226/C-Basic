#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void xoa(char a[], char c){
    int j=0;
    for(int i=0; i<strlen(a); i++){
        if(a[i]!=c){
            a[j]=a[i];
            j++;
        }
    }
    a[j]='\0';
    printf("%s", a);
}
int main(){
    char a[10000];
    gets(a);
    char c;
    scanf("%c", &c);
    xoa(a, c);
    return 0;
}