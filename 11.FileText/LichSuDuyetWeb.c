#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct ls{
    char w[100];
    int sl;
};
typedef struct ls ls;
int cmp(const void *a, const void *b){
    ls *x=(ls*)a;
    ls *y=(ls*)b;
    if(x->sl==y->sl){
        return strcmp(x->w, y->w);
    }
    return y->sl-x->sl;
}
void main(){
    FILE *f;
    f=fopen("LichSuDuyetWeb.input.txt", "r");
    if(f==NULL){
        printf("Khong co file.");
    }
    else{
        FILE *f1;
        ls a[100];
        int n=0;
        f1=fopen("LichSuDuyetWeb.output.txt", "w");
        char w[100];
        while(fscanf(f, "%s", w)!=-1){
            if(strstr(w, ".")!=NULL){
                int check=0;
                for(int i=0; i<n; i++){
                    if(strcmp(w, a[i].w)==0){
                        check=1;
                        a[i].sl++;
                        break;
                    }
                }
                if(check==0){
                    strcpy(a[n].w, w);
                    a[n].sl=1;
                    n++;
                }
            }
        }
        qsort(a, n, sizeof(ls), cmp);
        for(int i=0; i<n; i++){
            fprintf(f1, "%s %d\n", a[i].w, a[i].sl);
        }
        fclose(f1);
    }
    fclose(f);
}