#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void lat(char kq[]){
    for(int i=0; i<strlen(kq)/2; i++){
        int tmp=kq[i];
        kq[i]=kq[strlen(kq)-1-i];
        kq[strlen(kq)-1-i]=tmp;
    }
}
int main(){
    char c[120106];
    gets(c);
    char kq[220606];
    int dem=0;
    int cs=0;
    for(int i=strlen(c)-1; i>=0; i--){
        dem+=1;
        kq[cs]=c[i];
        cs+=1;
        if(dem%3==0&&i!=0){
            kq[cs]=',';
            cs+=1;
        }
    }
    lat(kq);
    for(int i=0; i<strlen(kq); i++){
        printf("%c", kq[i]);
    }
}