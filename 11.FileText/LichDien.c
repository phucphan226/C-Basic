#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int cmp(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    if(x[1]==y[1]){
        return x[0]-y[0];
    }
    else{
        return x[1]-y[1];
    }
}
int main(){
    FILE *f;
    f=fopen("LichDien.input.txt", "r");
    if(f==NULL){
        printf("Khong co file.");
        return 0;
    }
    int n;
    fscanf(f, "%d", &n);
    int h[100000][2], m=0;
    for(int i=1; i<=n; i++){
        int a, b;
        fscanf(f, "%d%d", &a, &b);
        h[m][0]=a;
        h[m][1]=b;
        m+=1;
    }
    qsort(h, m, sizeof(h[0]), cmp);
    FILE *f1;
    f1=fopen("LichDien.output.txt", "w");
    fprintf(f1, "%d %d\n",h[0][0], h[0][1]);
    for(int i=1; i<m; i++){
        if(h[i][0]>h[i-1][1]){
            fprintf(f1, "%d %d\n", h[i][0], h[i][1]);
        }
    }
    fclose(f1);
    fclose(f);
    return 0;
}