#include<stdio.h>
#include<math.h>
void strCat(char *dest, char *src){
    char c[strlen(dest)+strlen(src)+1];
    for(int i=0; i<strlen(dest); i++){
        c[i]=dest[i];
    }
    for(int i=0; i<strlen(src); i++){
        c[i+strlen(dest)]=src[i];
    }
    c[strlen(c)-1]='\0';
    printf("%s", c);
}
int main(){
    char dest[10000];
    gets(dest);
    char scr[10000];
    gets(scr);
    strCat(dest, scr);
}