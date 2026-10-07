//Ten dung dinh dang. VD: Phan Hoang Phuc, sap theo tu dien tang dan cua ten, giong ten thi theo ho, giong ca ho thi theo dem.
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct ten{
    char ten[100];
    char ho[100];
    char dem[100];
};
typedef struct ten ten;
void dk(char c[]){
    c[0]=toupper(c[0]);
    for(int i=1; i<strlen(c); i++){
        c[i]=tolower(c[i]);
    }
}
int cmp(const void *a, const void *b){
    ten *x=(ten*)a;
    ten *y=(ten*)b;
    if(strcmp(x->ten, y->ten)==0){
        if(strcmp(x->ho, y->ho)==0){
            return strcmp(x->dem, y->dem);
        }
        return strcmp(x->ho, y->ho);
    }
}
void main(){
    FILE *f;
    f=fopen("ChuanHoaTen.input.txt", "r");
    if(f==NULL){
        printf("KHONG CO FILE.");
    }
    else{
        FILE *f1;
        f1=fopen("ChuanHoaTen.output.txt", "w");
        ten a[100];
        char ht[100];
        int n=0;
        while(fgets(ht, 100, f)!=NULL){
            ht[strlen(ht)-1]='\0';
            char b[100][100];
            int m=0;
            char *xau=strtok(ht, " ");
            while(xau!=NULL){
                dk(xau);
                strcpy(b[m], xau);
                m++;
                xau=strtok(NULL, " ");
            }
            strcpy(a[n].ho, b[0]);
            strcpy(a[n].ten, b[m-1]);
            strcpy(a[n].dem, b[1]);
            for(int i=2; i<m-1; i++){
                strcat(a[n].dem, " ");
                strcat(a[n].dem, b[i]);
            }
            n++;
        }
        qsort(a, n, sizeof(ten), cmp);
        for(int i=0; i<n; i++){
            fprintf(f1, "%s %s %s\n", a[i].ho, a[i].dem, a[i].ten);
        }
        fclose(f1);
    }
    fclose(f);
}