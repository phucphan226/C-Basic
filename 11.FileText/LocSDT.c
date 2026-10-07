#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char c[], char sdt[]){
    if(c[0]!='0'||strlen(c)<9){
        return 0;
    }
    int n=0;
    for(int i=0; i<=fmin(strlen(c)-1, 9); i++){
        if(c[i]<'0'||c[i]>'9'){
            return 0;
        }
        sdt[n]=c[i];
        n++;
    }
    return 1;
}
int main(){
    FILE *f;
    f=fopen("LocSDT.input.txt", "r");
    if(f==NULL){
        printf("Khong co file.");
    }
    else{
        FILE *f1;
        f1=fopen("LocSDT.output.txt", "w");
        char c[100000];
        while(fscanf(f, "%s", &c)!=-1){
            char sdt[100];
            if(check(c, sdt)==1){
                fprintf(f1, "%s\n", sdt);
            }
        }
        fclose(f1);
    }
    fclose(f);
    return 0;
}