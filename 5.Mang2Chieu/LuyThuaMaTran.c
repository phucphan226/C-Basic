#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int n, a[1000][1000], b[1000][1000], c[1000][1000];
void exponentA(int k){
    for(int i=1; i<k; i++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                c[i][j]=0;
                for(int h=0; h<n; h++){
                    c[i][j]+=a[i][h]*b[h][j];
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                b[i][j]=c[i][j];
            }
        }
    }
}
int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            b[i][j]=a[i][j];
        }
    }
    int k;
    scanf("%d", &k);
    exponentA(k);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}