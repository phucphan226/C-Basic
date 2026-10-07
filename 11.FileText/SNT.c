//Loc ra cac SNT theo thu tu tang dan
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int snt(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int cmp(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    return *x-*y;
}
int main(){
    FILE *f;
    f=fopen("SNT.input.txt", "r");
    if(f==NULL){
        printf("Khong co file");
    }
    else{
        FILE *f1;
        f1=fopen("SNT.output.txt", "w");
        int n;
        int a[100000];
        int m=0;
        while(fscanf(f, "%d", &n)!=-1){
            if(snt(n)==1){
                a[m]=n;
                m++;
            }
        }
        qsort(a, m, sizeof(int), cmp);
        for(int i=0; i<m; i++){
            fprintf(f1, "%d ", a[i]);
        }
        fclose(f1);
    }
    fclose(f);
    return 0;
}