#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void main(){
    FILE *f;
    f=fopen("ThuCamOn.input.txt", "r");
    if(f==NULL){
        printf("KHONG CO FILE.");
    }
    else{
        FILE *f1;
        f1=fopen("ThuCamOn.output.txt", "w");
        char ht[100], ngay[100], sp[100];
        while(fgets(ht, 100, f)!=NULL){
            ht[strlen(ht)-1]='\0';
            fscanf(f, "%s", ngay);
            fgetc(f);
            fgets(sp, 100, f);
            sp[strlen(sp)-1]='\0';
            fprintf(f1, "Cam on %s da tin tuong 28shop, don hang %s cua ban da duoc giao thanh cong vao ngay %s\nBest!\n", ht, sp, ngay);
        }
        fclose(f1);
    }
    fclose(f);
}