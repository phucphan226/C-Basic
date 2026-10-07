//Thay doi CNT1, Nguyen Van A, Hai Duong, IT1 thanh CNT1, Hoang Van loc, Thai Binh, IT2
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
struct sv{
    char msv[100];
    char ht[100];
    char dc[100];
    char lop[100];
};
typedef struct sv sv;
void main(){
    FILE *f;
    f=fopen("ThayDoiThongTin.input.txt", "r");
    if(f==NULL){
        printf("KHONG CO FILE.");
    }
    else{
        FILE *f1;
        f1=fopen("ThayDoiThongTin.output.bin", "wb");
        char msv[100];
        char ht[100];
        char dc[100];
        char lop[100];
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
            if(strcmp(msv, "CNT1")==0&&strcmp(ht, "Nguyen Van A")==0&&strcmp(dc, "Hai Duong")==0&&strcmp(lop, "IT1")==0){
                strcpy(ht, "Hoang Van Loc");
                strcpy(dc, "Thai Binh");
                strcpy(lop, "IT2");
            }
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
        f1=fopen("ThayDoiThongTin.output.bin", "rb");
        for(int i=0; i<n; i++){
            fread(&a[i], sizeof(sv), 1, f1);
            printf("%s\n%s\n%s\n%s\n", a[i].msv, a[i].ht, a[i].dc, a[i].lop);
        }
        fclose(f1);
    }
    fclose(f);
}