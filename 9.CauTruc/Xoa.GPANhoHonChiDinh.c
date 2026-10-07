#include<stdio.h>
struct sinhVien{
    char ht[1000];
    char ns[1000];
    char qq[1000];
    float gpa;
};
typedef struct sinhVien sv;
void nhap(sv *x){
    gets(x->ht);
    gets(x->ns);
    gets(x->qq);
    scanf("%f", &x->gpa);
    getchar();
}
void xuat(sv *x){
    printf("%s %s %s %.2f\n", x->ht, x->ns, x->qq, x->gpa);
}
void xoa(sv a[], int *n){
    for(int i=0; i<*n; i++){
        if(a[i].gpa<1.0){
            for(int j=i; j<*n-1; j++){
                a[j]=a[j+1];
            }
            (*n)--;
            i--;
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
    xoa(a, &n);
    for(int i=0; i<n; i++){
        xuat(&a[i]);
    }
    return 0;
}