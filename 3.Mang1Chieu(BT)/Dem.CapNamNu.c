//Nam cao hon nu, moi ban chi duoc chon 1 lan, tim so cap lon nhat co the ghep
#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    return *y-*x;
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    for(int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    qsort(b, m, sizeof(int), cmp);
    int dem=0, i=0, j=0;
    while(i<n&&j<m){
        if(a[i]>b[j]){
            dem++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    printf("%d", dem);
    return 0;
}