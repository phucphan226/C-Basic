//2 phần tử được xếp chung nhóm với nhau nếu như chênh lệch giữa chúng không vượt quá K
//2, 6, 1, 7, 3, 4, 9 và K = 1, ta sẽ có 3 nhóm: {1, 2, 3, 4}, {6, 7} và {9}
#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    if(*x<*y){
        return -1;
    }
    else{
        return 1;
    }
}
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    int dem=1;
    for(int i=1; i<n; i++){
        if(a[i]-a[i-1]>k){
            dem++;
        }
    }
    printf("%d", dem);
    return 0;
}
