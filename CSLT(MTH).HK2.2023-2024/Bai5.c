#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void taoMaTranB(int m, int n, int a[][n], int b[][n]){
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
        for(int j=0; j<n; j++){
            if(tonghang[i]>=tongcot[j]){
                b[i][j]=1;
            }
            else{
                b[i][j]=0;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
void tongMang(int m, int n, int b[][n]){
    for(int i=0; i<m; i++){
        int tong=0;
        for(int j=0; j<n; j++){
            tong+=b[i][j];
        }
        printf("%d ", tong);
    }
}
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int b[m][n];
    taoMaTranB(m, n, a, b);
    printf("\n");
    tongMang(m, n, b);
    return 0;
}