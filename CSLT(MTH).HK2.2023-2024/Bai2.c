#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int a, n;
    scanf("%d%d", &a, &n);
    float tong=0.0;
    for(int i=0; i<=n; i++){
        tong+=(float)pow(a, i)/(i+1);
    }
    printf("%.2f", tong);
}