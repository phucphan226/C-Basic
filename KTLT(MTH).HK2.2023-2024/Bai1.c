#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int demUoc(int n){
    int res=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            res+=1;
            if(n/i!=i){
                res+=1;
            }
        }
    }
    return res;
}
int main(){
    FILE *f;
    f=fopen("Bai1.input.txt", "r");
    if(f==NULL){
        printf("Khong co file.");
    }
    else{
        FILE *f1;
        f1=fopen("Bai1.output.txt", "w");
        int n, res=-1e9;
        fscanf(f, "%d", &n);
        int a[n];
        for(int i=0; i<n; i++){
            fscanf(f, "%d", &a[i]);
        }
        for(int i=0; i<n; i++){
            if(demUoc(a[i])>res){
                res=demUoc(a[i]);
            }
        }
        fprintf(f1, "%d", res);
        fclose(f1);
        fclose(f);
    }
    return 0;
}