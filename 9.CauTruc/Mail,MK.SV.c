//Nguyen Van An 01/05/2005. mk: annv@gmail.com, MK: 152005
//Nguyen Viet An 01/02/2002. mk:annv2@gmail.com, MK: 122002
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void dd(char c[]){
    if(isalpha(c[0])){
        c[0]=tolower(c[0]);
        for(int i=1; i<strlen(c); i++){
            c[i]=tolower(c[i]);
        }
    }
}
struct tk{
    char mail[1000];
    int sl;
};
typedef struct tk tk;
int main(){
    int z;
    scanf("%d", &z);
    getchar();
    tk a[z];
    for(int i=0; i<z; i++){
        char ht[1000];
        gets(ht);
        char c[1000][1000];
        int m=0;
        char *xau=strtok(ht, " ");
        while(xau!=NULL){
            dd(xau);
            strcpy(c[m], xau);
            m++;
            xau=strtok(NULL, " ");
        }
        char mail[100];
        strcpy(mail, c[m-2]);
        int len=strlen(mail);
        for(int j=0; j<m-2; j++){
            mail[len]=c[j][0];
            len++;
        }
        mail[len]='\0';
        int check=0;
        for(int j=0; j<i; j++){
            if(strcmp(a[j].mail, mail)==0){
                check=1;
                a[j].sl++;
                strcpy(a[i].mail, mail);
                printf("%s%d%s\n", a[i].mail, a[j].sl, "@gmail.com");
                break;
            }
        }
        if(check==0){
            strcpy(a[i].mail, mail);
            a[i].sl=1;
            printf("%s%s\n", a[i].mail, "@gmail.com");
        }
        char *xau1=strtok(c[m-1], "/");
        while(xau1!=NULL){
            printf("%d", atoi(xau1));
            xau1=strtok(NULL, "/");
        }
        printf("\n");
    }
    return 0;
}