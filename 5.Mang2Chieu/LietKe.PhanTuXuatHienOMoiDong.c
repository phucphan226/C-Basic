#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    int max=-1e9, min=1e9;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
            max=fmax(a[i][j], max);
            min=fmin(a[i][j], min);
        }
    }
    int check=0;
    for(int i=min; i<=max; i++){
        int dem=0;
        for(int j=0; j<n; j++){
            for(int h=0; h<n; h++){
                if(i==a[j][h]){
                    dem++;
                    break;
                }
            }
        }
        if(dem==n){
            check=1;
            printf("%d ", i);
        }
    }
    if(check==0){
        printf("NOT FOUND");
    }
    return 0;
}