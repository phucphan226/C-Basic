#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    FILE *f;
    f=fopen("MailMK.input.txt", "r");
    if(f==NULL){
        printf("Khong co file.");
    }
    else{
        FILE *f1;
        f1=fopen("MailMK.output.txt", "w");
        int cnt=0;
        char c[10000];
        while(fgets(c, 10000, f)!=NULL){
            c[strlen(c)-1]='\0';
            if(cnt%2==0){
                for(int i=0; i<strlen(c); i++){
                    c[i]=tolower(c[i]);
                }
                int m=0;
                char a[1000][100];
                char *xau=strtok(c, " ");
                while(xau!=NULL){
                    strcpy(a[m], xau);
                    m++;
                    xau=strtok(NULL, " ");
                }
                fprintf(f1, "%s", a[m-1]);
                for(int i=0; i<m-1; i++){
                    fprintf(f1, "%c", a[i][0]);
                }
                fprintf(f1, "%s\n", "@gmail.com");
            }
            else{
                char *xau1=strtok(c, "/");
                while(xau1!=NULL){
                    if(strlen(xau1)==2){
                        for(int i=0; i<strlen(xau1); i++){
                            if(xau1[i]!='0'){
                            fprintf(f1, "%c", xau1[i]);
                            }
                        }
                    }
                    else{
                        fprintf(f1, "%s\n", xau1);
                    }
                    xau1=strtok(NULL, "/");
                }
            }
            cnt++;
        }
        fclose(f1);
    }
    fclose(f);
    return 0;
}