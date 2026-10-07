#include<math.h>
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int kq=ceil((double)a/b)*b;
    printf("%d", kq);
}