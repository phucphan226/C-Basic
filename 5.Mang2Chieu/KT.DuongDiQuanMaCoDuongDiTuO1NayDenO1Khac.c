#include<stdio.h>
int n, s, t, u, v;
int di[8]={-2, -2, -1, -1, 1, 1, 2, 2};
int dj[8]={-1, 1, -2, 2, -2, 2, -1, 1};
void loang(int n, int a[][n], int i, int j){
    a[i][j]=0;
    for(int h=0; h<8; h++){
        int p=i+di[h], q=j+dj[h];
        if(a[p][q]==1&&p>=0&&p<n&&q>=0&&q<n){
            loang(n, a, p, q);
        }
    }
}
int main(){
    scanf("%d%d%d%d%d", &n, &s, &t, &u, &v);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    loang(n, a, s-1, t-1);
    if(a[u-1][v-1]==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}