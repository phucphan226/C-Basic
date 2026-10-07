#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct diem{
    float x, y;
};
typedef struct diem diem;
void nhap(diem *a){
    scanf("%f%f", &a->x, &a->y);
}
void xuat(diem *a){
    printf("%f %f", a->x, a->y);
}
float kc(diem *a, diem *b){
    float res;
    res=sqrt(pow(a->x-b->x, 2)+pow(a->y-b->y, 2));
    return res;
}
int cmp(diem *a, diem *b){
    diem *u=(diem*)a;
    diem *v=(diem*)b;
    if(u->x==v->x){
        return u->y-v->y;
    }
    else{
        return u->x-v->x;
    }
}
int main(){
    diem arr[1000][2];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        nhap(&arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), cmp);
    for(int i=0; i<n; i++){
        xuat(&arr[i]);
        printf("\n");
    }
    return 0;
}