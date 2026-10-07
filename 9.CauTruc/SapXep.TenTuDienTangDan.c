#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
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
void xuat(sv *x){
    printf("%s %s %s %.2f\n", x->ht, x->ns, x->dc, x->gpa);
}
int gd(const void *a, const void *b){
    sv *x=(sv*)a;
    sv *y=(sv*)b;
    return strcmp(x->ht, y->ht);
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    sv a[n];
    for(int i=0; i<n; i++){
        nhap(&a[i]);
    }
    qsort(a, n, sizeof(a[0]), gd);
    for(int i=0; i<n; i++){
        xuat(&a[i]);
    }
    return 0;
}