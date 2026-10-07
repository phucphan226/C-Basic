#include<stdio.h>
int di[]={-1, 0, 0, 1};
int dj[]={0, -1, 1, 0};
int n, m, a[n][m], dem;
int loang(int i, int j){
    int a[i][j]=0;
    for(int h=0; h<4; h++){
        int di=i+di[h];
        int dj=j+dj[h];

    }
}
int main(){
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==1){
                dem=0;
                loang(i, j);
            }
        }
    }
    return 0;
}