#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void input(int n, char a[][1000]){
    for(int i=0; i<n; i++){
        gets(a[i]);
    }
}
void getString(int n, char a[][1000], int x){
    if(x<=0||x>n){
        printf("KO THOA MAN");
    }
    else{
        printf("%s", a[x-1]);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char a[n][1000];
    input(n, a);
    int x;
    scanf("%d", &x);
    getString(n, a, x);
    return 0;
}