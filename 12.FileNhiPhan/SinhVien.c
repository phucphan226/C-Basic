#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct sv{
    char msv[100];
    char ht[100];
    char dc[100];
    char lop[100];
};
typedef struct sv sv;
int main(){
    FILE *f;
    f=fopen("SinhVien.input.txt", "r");
    if(f==NULL){
        printf("KHONG CO FILE");
    }
    else{
        FILE *f1;
        f1=fopen("SinhVien.output.bin", "wb");
        char msv[100], ht[100], dc[100], lop[100];
        sv a[100];
        int n=0;
        while(fgets(msv, 100, f)!=NULL){
            msv[strlen(msv)-1]='\0';
            fgets(ht, 100, f);
            ht[strlen(ht)-1]='\0';
            fgets(dc, 100, f);
            dc[strlen(dc)-1]='\0';
            fgets(lop, 100, f);
            lop[strlen(lop)-1]='\0';
            strcpy(a[n].msv, msv);
            strcpy(a[n].ht, ht);
            strcpy(a[n].dc, dc);
            strcpy(a[n].lop, lop);
            n++;
        }
        for(int i=0; i<n; i++){
            fwrite(&a[i], sizeof(sv), 1, f1);
        }
        fclose(f1);
        f1=fopen("SinhVien.output.bin", "rb");
        for(int i=0; i<n; i++){
            fread(&a[i], sizeof(sv), 1, f1);
            printf("%s %s %s %s\n", a[i].msv, a[i].ht, a[i].dc, a[i].lop);
        }
        fclose(f1);
    }
    return 0;
}