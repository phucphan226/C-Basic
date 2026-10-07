#include<stdio.h>
struct sinhVien{
    char ten[1000];
    char nganh[1000];
    double gpa;
};
typedef struct sinhVien sv;
sv nhap(){
    sv x;
    printf("Nhap ten SV: ");
    gets(x.ten);
    printf("Nhap ten nganh: ");
    gets(x.nganh);
    printf("Nhap GPA: ");
    scanf("%lf", &x.gpa);
    getchar();
    return x;
}
sv xuat(sv x){
    printf("%s %s %.2lf\n", x.ten, x.nganh, x.gpa);
}
int main(){
    int n;
    printf("Nhap so SV: ");
    scanf("%d", &n);
    getchar();
    sv a[n];
    for(int i=0; i<n; i++){
        a[i]=nhap();
    }
    for(int i=0; i<n; i++){
        xuat(a[i]);
    }
    return 0;
}
