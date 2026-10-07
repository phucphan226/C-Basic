#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int cnt[100001];
int a[100001];
int kg(int n){
    while(n!=0){
        if(n%10<(n/10)%10){
            return 0;
        }
        n=n/10;
    }
    return 1;
}
int cmp(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    return *x-*y;
}
int main(){
    int n;
    int max=-1e9;
    int m=0;
    while(scanf("%d", &n)!=-1){
        if(kg(n)==1){
            a[m]=n;
            m++;
            cnt[n]++;
            max=fmax(max, cnt[n]);
        }
    }
    qsort(a, m, sizeof(int), cmp);
    for(int i=max; i>0; i--){
        for(int j=0; j<m; j++){
            if(cnt[a[j]]==i){
                printf("%d %d\n", a[j], i);
                cnt[a[j]]=0;
            }
        }
    }
    return 0;
}