#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void dao(char a[]){
    for(int i=0; i<strlen(a)/2; i++){
        char tmp=a[i];
        a[i]=a[strlen(a)-1-i];
        a[strlen(a)-1-i]=tmp;
    }
}
int main(){
    char a[10000];
    gets(a);
    dao(a);
    printf("%s", a);
}