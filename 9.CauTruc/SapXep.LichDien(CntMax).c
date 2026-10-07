#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct time{
    int bd, kt;
};
typedef struct time time;
void in(time *x){
    scanf("%d %d", &x->bd, &x->kt);
}
int cmp(const void *a, const void *b){
    time *x=(time*)a;
    time *y=(time*)b;
    if(x->kt==y->kt){
        return x->bd-y->bd;
    }
    else{
        return x->kt-y->kt;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    time a[100000];
    for(int i=0; i<n; i++){
        in(&a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    printf("%d %d\n", a[0].bd, a[0].kt);
    for(int i=1; i<n; i++){
        if(a[i].bd>a[i-1].kt){
            printf("%d %d\n", a[i].bd, a[i].kt);
        }
    }
    return 0;
}