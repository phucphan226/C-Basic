#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char c[100000];
int doDai[100000];
int main(){
    gets(c);
    int n=0; 
    char *xau=strtok(c, " ");
    while(xau!=NULL){
        doDai[strlen(xau)]++;
        xau=strtok(NULL, " ");
    }
    int mau=0;
    int tu=0;
    for(int i=0; i<100000; i++){
        if(doDai[i]!=0){
            mau+=i;
            tu+=i*doDai[i];
        }
    }
    printf("Trung binh trong so cua cau la: %.2f", 1.0*tu/mau);
}