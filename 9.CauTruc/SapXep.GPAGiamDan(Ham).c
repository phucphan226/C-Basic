#include<stdio.h>
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
void gd(sv a[], int n){
    for(int i=0; i<n; i++){
        int max_pos=i;
        for(int j=i+1; j<n; j++){
            if(a[j].gpa>a[max_pos].gpa){
                max_pos=j;
            }
        }
        sv tmp=a[i];
        a[i]=a[max_pos];
        a[max_pos]=tmp;
    }
}
int main(){
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    getchar();
    sv a[n];
    for(int i=0; i<n; i++){
        nhap(&a[i]);
    }
    gd(a, n);
    for(int i=0; i<n; i++){
        xuat(&a[i]);
    }
    return 0;
}
