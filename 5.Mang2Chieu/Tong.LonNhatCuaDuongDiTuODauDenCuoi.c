#include<stdio.h>
#include<math.h>
int n, m;
int a[100][100];
int di[]={0, 1};
int dj[]={1, 0};
int main(){
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    long long res[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            res[i][j]=a[i][j];
            if(i==0&&j==0){
                res[i][j]=res[i][j];
            }
            else if(i==0){
                res[i][j]+=res[i][j-1];
            }
            else if(j==0){
                res[i][j]+=res[i-1][j];
            }
            else{
                res[i][j]+=(long long)fmax(res[i][j-1], res[i-1][j]);
            }
        }
    }
    printf("%lld", res[n-1][m-1]);
    return 0;
}