#include<stdio.h>
struct sinhVien{
    char hoten[1000];
    char ngaysinh[1000];
    char diachi[1000];
    int toan, li, hoa;
};
typedef struct sinhVien sv;
void nhap(sv *x){
    gets(x->hoten);
    gets(x->ngaysinh);
    gets(x->diachi);
    scanf("%d%d%d", &x->toan, &x->li, &x->hoa);
    getchar();
}
void xuat(sv *x){
    printf("%s %s %s %d\n", x->hoten, x->ngaysinh, x->diachi, x->toan+x->li+x->hoa);
}
void xuat1(sv *x){
    printf("%s %s %s %d ", x->hoten, x->ngaysinh, x->diachi, x->toan+x->li+x->hoa);
    if(x->toan+x->li+x->hoa>=24){
        printf("DO\n");
    }
    else{
        printf("TRUOT\n");
    }
}
void thukhoa(sv a[], int n){
    int max=-1e9;
    for(int i=0; i<n; i++){
        max=fmax(max, a[i].toan+a[i].li+a[i].hoa);
    }
    for(int i=0; i<n; i++){
        if(a[i].toan+a[i].li+a[i].hoa==max){
            xuat(&a[i]);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    sv a[n];
    for(int i=0; i<n; i++){
        nhap(&a[i]);
    }
    printf("DANH SACH THU KHOA :\n");
    thukhoa(a, n);
    printf("KET QUA XET TUYEN:\n");
    for(int i=0; i<n; i++){
        xuat1(&a[i]);
    }
    return 0;
}
