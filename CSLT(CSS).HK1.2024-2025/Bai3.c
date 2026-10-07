#include<stdio.h>
#include<math.h>
int findNumberKTimesPerRow(int a[][100], int m, int n, int k){
    for(int i=0; i<n; i++){
        int dem=1;
        for(int j=i+1; j<n; j++){
            if(a[0][i]==a[0][j]){
                dem++;
            }
            if(dem==k){
                return a[0][i];
            }
        }
    }
}
int main(){
    int m, n, k;
    scanf("%d%d%d", &m, &n, &k);
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d", findNumberKTimesPerRow(a, m, n, k));
    return 0;
}