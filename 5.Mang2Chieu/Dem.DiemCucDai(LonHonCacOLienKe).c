#include<stdio.h>
int di[]={-1, -1, -1, 0, 0, 1, 1, 1};
int dj[]={-1, 0, 1, -1, 1, -1, 0, 1};
int loang(int n, int m, int a[][m], int i, int j){
    int max=a[i][j];
    for(int h=0; h<8; h++){
        int i1=i+di[h];
        int j1=j+dj[h];
        if(a[i1][j1]>=max&&i1<n&&i1>=0&&j1<m&&j1>=0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int dem=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(loang(n, m, a, i, j)==1){
                dem+=1;
            }
        }
    }
    printf("%d", dem);
}