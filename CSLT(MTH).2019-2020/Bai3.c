#include<stdio.h>
#include<math.h>
int main(){
    float x;
    int n;
    scanf("%f%d", &x, &n);
    float a[1000];
    for(int i=0; i<n; i++){
        scanf("%f", &a[i]);
    }
    int icheck;
    float min=1e9;
    for(int i=0; i<n; i++){
        if(abs(a[i]-x)<min){
            icheck=i;
        }
    }
    printf("%.2f", a[icheck]);
}