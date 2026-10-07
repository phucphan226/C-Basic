//Loc ra SV co tong diem >=27, sap xep giam dan theo diem
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct sv{
    char ht[100];
    char mail[100];
    char sdt[100];
    float diem;
};
typedef struct sv sv;
int cmp(const void *a, const void *b){
    sv *x=(sv*)a;
    sv *y=(sv*)b;
    if(x->diem>y->diem){
        return -1;
    }
    return 1;
}
void main(){
    FILE *f;
    f=fopen("XetTuyen.input.txt", "r");
    if(f==NULL){
        printf("KHONG CO FILE.");
    }
    else{
        FILE *f1;
        f1=fopen("XetTuyen.output.txt", "w");
        char ht[100], mail[100], sdt[100];
        sv a[100];
        int n=0;
        float diem[3];
        while(fgets(ht, 100, f)!=NULL){
            ht[strlen(ht)-1]='\0';
            fscanf(f, "%s", mail);
            fscanf(f, "%s", sdt);
            float tong=0;
            for(int i=0; i<3; i++){
                fscanf(f, "%f", &diem[i]);
                tong+=diem[i];
            }
            fgetc(f);
            if(tong>=27){
                strcpy(a[n].ht, ht);
                strcpy(a[n].mail, mail);
                strcpy(a[n].sdt, sdt);
                a[n].diem=tong;
                n++;
            }
        }
        qsort(a, n, sizeof(sv), cmp);
        for(int i=0; i<n; i++){
            fprintf(f1, "%s\n%s\n%s\n%.2f\n", a[i].ht, a[i].mail, a[i].sdt, a[i].diem);
        }
        fclose(f1);
    }
    fclose(f);
}