#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    float s=0.0;
    for(int i=0; i<n-1; i++){
        s+=(float)sqrt(pow(a[i+1][0]-a[i][0], 2)+pow(a[i+1][1]-a[i][1], 2));
    }
    printf("%.2f", s);
    return 0;
}