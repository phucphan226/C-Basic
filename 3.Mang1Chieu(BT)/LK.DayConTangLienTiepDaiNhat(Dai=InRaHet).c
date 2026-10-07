#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int cs[1000];
    int i=1;
    int max=-1e9;
    int m=0;
    while(i<n){
        int dem=1;
        while(i<n&&a[i]>a[i-1]){
            dem++;
            i++;
        }
        if(dem>max){
            max=dem;
            m=0;
            cs[m]=i-1;
        }
        else if(dem==max){
            m++;
            cs[m]=i-1;
        }
        i++;
    }
    printf("%d\n", max);
    for(int j=0; j<=m; j++){
        for(int h=cs[j]-max+1 ; h<=cs[j]; h++){
            printf("%d ", a[h]);
        }
        printf("\n");
    }
    if(max==1){
        printf("%d\n", a[n-1]);
    }
    return 0;
}