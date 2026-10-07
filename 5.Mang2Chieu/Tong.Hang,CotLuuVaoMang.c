#include<stdio.h>
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int tonghang[m];
    for(int i=0; i<m; i++){
        tonghang[i]=0;
        for(int j=0; j<n; j++){
            tonghang[i]+=a[i][j];
        }
    }
    int tongcot[n];
    for(int j=0; j<n; j++){
        tongcot[j]=0;
        for(int i=0; i<m; i++){
            tongcot[j]+=a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        printf("%d ", tonghang[i]);
    }
    printf("\n");
    for(int j=0; j<n; j++){
        printf("%d ", tongcot[j]);
    }
    return 0;
}