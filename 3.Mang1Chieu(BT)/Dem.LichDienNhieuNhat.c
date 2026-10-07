//Di dien duoc nhieu buoi nhat co the.
#include<stdio.h>
#include<stdlib.h>
struct time{
    int bd, kt;
};
typedef struct time time;
int cmp(const void *a, const void *b){
    time *x=(time*)a;
    time *y=(time*)b;
    return x->kt-y->kt;
}
void nhap(time *x){
    scanf("%d%d", &x->bd, &x->kt);
}
int main(){
    int n;
    scanf("%d", &n);
    time a[n];
    for(int i=0; i<n; i++){
        nhap(&a[i]);
    }
    qsort(a, n, sizeof(time), cmp);
    int dem=1, kt=a[0].kt;
    for(int i=1; i<n; i++){
        if(a[i].bd>kt){
            kt=a[i].kt;
            dem++;
        }
    }
    printf("%d", dem);
    return 0;
}