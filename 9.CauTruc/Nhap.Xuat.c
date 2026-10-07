#include<stdio.h>
struct sinhVien{
    char ten[1000];
    char nganh[1000];
    double gpa;
};
typedef struct sinhVien sv;
int main(){
    int n;
    printf("Nhap so SV: ");
    scanf("%d", &n);
    getchar();
    sv a[n];
    for(int i=0; i<n; i++){
        printf("Nhap ten SV: ");
        gets(a[i].ten);
        printf("Nhap ten nganh: ");
        gets(a[i].nganh);
        printf("Nhap GPA: ");
        scanf("%lf", &a[i].gpa);
        getchar();
    }
    for(int i=0; i<n; i++){
        printf("%s %s %.2lf\n", a[i].ten, a[i].nganh, a[i].gpa);
    }
    return 0;
}
