#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct book{
    char ms[1000];
    char ts[1000];
    char tg[1000];
    int nxb;
    int sl;
};
typedef struct book book;
void nhap(book *x){
    gets(x->ms);
    gets(x->ts);
    gets(x->tg);
    scanf("%d", &x->nxb);
    scanf("%d", &x->sl);
    getchar();
}
void xuat(book *x){
    printf("%s %s %s %d %d\n", x->ms, x->ts, x->tg, x->nxb, x->sl);
}
void find(book a[], int n, char s[]){
    for(int i=0; i<n; i++){
        if(strcmp(a[i].ts, s)==0){
            printf("%s %s %s %d %d\n", a[i].ms, a[i].ts, a[i].tg, a[i].nxb, a[i].sl);
        }
    }
}
void update(book a[], int n, char msUpdate[], int slUpdate){
    for(int i=0; i<n; i++){
        if(strcmp(a[i].ms, msUpdate)==0){
            a[i].sl=slUpdate;
            printf("%s %s %s %d %d\n", a[i].ms, a[i].ts, a[i].tg, a[i].nxb, a[i].sl);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    book a[n];
    for(int i=0; i<n; i++){
        nhap(&a[i]);
    }
    for(int i=0; i<n; i++){
        xuat(&a[i]);
    }
    char tuKhoa[1000];
    gets(tuKhoa);
    find(a, n, tuKhoa);
    char msUpdate[1000];
    gets(msUpdate);
    int slUpdate;
    scanf("%d", &slUpdate);
    getchar();
    update(a, n, msUpdate, slUpdate);
    return 0;
}