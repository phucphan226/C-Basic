#include<stdio.h>
int di[]={-1, 0, 0, 1};
int dj[]={0, -1, 1, 0};
void loang(int n, int m, int a[][m], int i, int j){
    a[i][j]=0;
    for(int h=0; h<4; h++){
        int i1=i+di[h];
        int j1=j+dj[h];
        if(a[i1][j1]==1&&i1>=0&&i1<n&&j1>=0&&j1<m){
            loang(n, m, a, i1, j1);
        }
    }
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
            if(a[i][j]==1){
                dem+=1;
                loang(n, m, a, i, j);
            }
        }
    }
    printf("%d", dem);
}
