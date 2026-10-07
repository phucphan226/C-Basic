#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char a[505][505];
int n;
int check(int i, int j){
    int c[6]={0};
    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            if(a[i+x][j+y]=='2') c[0]=1;
            if(a[i+x][j+y]=='8') c[1]=1;
            if(a[i+x][j+y]=='t') c[2]=1;
            if(a[i+x][j+y]=='e') c[3]=1;
            if(a[i+x][j+y]=='c') c[4]=1;
            if(a[i+x][j+y]=='h') c[5]=1;
        }
    }
    return c[0]+c[1]+c[2]+c[3]+c[4]+c[5]==6;
}
int main(){
    scanf("%d ", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%c ", &a[i][j]);
            a[i][j]=tolower(a[i][j]);
        }
    }
    for(int i=0; i<n-2; i++){
        for(int j=0; j<n-2; j++){
            if(check(i, j)==1){
                printf("28tech\n");
                return 0;
            }
        }
    }
    printf("29tech\n");
    return 0;
}