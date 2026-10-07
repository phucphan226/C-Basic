#include<stdio.h>
struct sinhVien{
    char ten[1000];
    char nganh[1000];
    double gpa;
};
typedef struct sinhVien sv;
void nhap(sv *x){
    printf("Nhap ten SV: ");
    gets(x->ten);
    printf("Nhap ten nganh: ");
    gets(x->nganh);
    printf("Nhap GPA: ");
    scanf("%lf", &x->gpa);
    getchar();
}
void xuat(sv *x){
    printf("%s %s %.2lf\n", x->ten, x->nganh, x->gpa);
}
void xoa(sv a[], int *n, char name []){
    for(int i=0; i<*n; i++){
        if(strcmp(a[i].ten, name)==0){
            for(int j=i; j<*n-1; j++){
                a[j]=a[j+1];
            }
            (*n)--;
        }
    }
}
int main(){
    int n;
    printf("Nhap so SV: ");
    scanf("%d", &n);
    getchar();
    sv a[n];
    for(int i=0; i<n; i++){
        nhap(&a[i]);
    }
    xoa(a, &n, "Phan Hoang Phuc");
    for(int i=0; i<n; i++){
        xuat(&a[i]);
    }
    return 0;
}
