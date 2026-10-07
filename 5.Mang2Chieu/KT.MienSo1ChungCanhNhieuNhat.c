#include<stdio.h>
int di[]={-1, 0, 0, 1};
int dj[]={0, -1, 1, 0};
int n, m;
int a[501][501];
int cnt=0;
int max=-1e9;
void loang(int i, int j){
    cnt++;
    a[i][j]=0;
    for(int h=0; h<4; h++){
        int p=i+di[h], q=j+dj[h];
        if(a[p][q]==1&&p>=0&&p<n&&q>=0&&q<m){
            loang(p, q);
        }
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
                cnt=0;
                loang(i, j);
                if(cnt>max){
                    max=cnt;
                }
            }
        }
    }
    printf("%d", max);
    return 0;
}