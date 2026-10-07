#include<stdio.h>
int n, m, s, t, u, v;
int a[1001][1001];
int di[]={-1, 0, 0, 1};
int dj[]={0, -1, 1, 0};
void loang(int i, int j){
    a[i][j]=0;
    for(int h=0; h<4; h++){
        int i1=i+di[h];
        int j1=j+dj[h];
        if(i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]==1){
            loang(i1, j1);
        }
    }
}
int main(){
    scanf("%d%d%d%d%d%d", &n, &m, &s, &t, &u, &v);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    loang(s-1, t-1);
    if(a[u-1][v-1]==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}