#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int s=0;
    for(int i=1; i<=n; i++){
        s+=i*(i+1);
    }
    printf("%d", s);
}