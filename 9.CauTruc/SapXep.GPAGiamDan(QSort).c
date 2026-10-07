#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct sinhVien{
    char ten[1000];
    char nganh[1000];
    float gpa;
};
typedef struct sinhVien sv;
void nhap(sv *x){
    printf("Nhap ten: ");
    gets(x->ten);
    printf("Nhap nganh: ");
    gets(x->nganh);
    printf("Nhap GPA: ");
    scanf("%f", &x->gpa);
    getchar();
}
void xuat(sv *x){
    printf("%s %s %.2f\n", x->ten, x->nganh, x->gpa);
}
int gd(const void *a, const void *b){
    sv *x=(sv*)a;
    sv *y=(sv*)b;
    if(x->gpa>=y->gpa){
//=NhauLayXuatHienTruoc,NguocLaiBoDau=Di.
        return -1;
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    printf("Nhap n: ");
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
