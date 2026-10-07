#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
struct sinhVien{
    char ht[1000];
    char ns[1000];
    char dc[1000];
    float gpa;
};
typedef struct sinhVien sv;
void nhap(sv *x){
    gets(x->ht);
    gets(x->ns);
    gets(x->dc);
    scanf("%f", &x->gpa);
    getchar();
}
struct tinhThanh{
    char tinh[1000];
    int sl;
};
typedef struct tinhThanh tt;
tt b[1000];
int m=0;
int cmp(const void *a, const void *b){
    tt *x=(tt*)a;
    tt *y=(tt*)b;
    return strcmp(x->tinh, y->tinh);
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    sv a[n];
    for(int i=0; i<n; i++){
        nhap(&a[i]);
        int check=1;
        for(int j=0; j<m; j++){
            if(strcmp(a[i].dc, b[j].tinh)==0){
                check=0;
                b[j].sl++;
                break;
            }
        }
        if(check==1){
            strcpy(b[m].tinh, a[i].dc);
            b[m].sl=1;
            m++;
        }
    }
    qsort(b, m, sizeof(b[0]), cmp);
    int max=-1e9;
    for(int i=0; i<m; i++){
        max=fmax(b[i].sl, max);
    }
    for(int i=0; i<m; i++){
        if(b[i].sl==max){
            printf("%s\n", b[i].tinh);
        }
    }
    return 0;
}