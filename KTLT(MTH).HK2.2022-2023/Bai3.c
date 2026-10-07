#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct sv{
    long long msv;
    char ht[1000];
    double d1, d2, d3, d4;
};
typedef struct sv sv;
int cmp(const void *a, const void *b){
    sv *x=(sv*)a;
    sv *y=(sv*)b;
    float dtb1=(x->d1+x->d2+x->d3+x->d4)/4;
    float dtb2=(y->d1+y->d2+y->d3+y->d4)/4;
    return -dtb1+dtb2;
}
void bangDiem(sv a[], long long msv, int n){
    for(int i=0; i<n; i++){
        if(a[i].msv==msv){
            printf("%.2f %.2f %.2f %.2f\n", a[i].d1, a[i].d2, a[i].d3, a[i].d4);
        }
    }
}
char hocBong(sv a[], int n){
    int dem=0;
    float tmp=(3.0/100)*n;
    for(int i=0; i<n; i++){
        float dtb=(a[i].d1+a[i].d2+a[i].d3+a[i].d4)/4;
        if(dem<tmp && dtb>7.5){
            printf("%lld %s\n", a[i].msv, a[i].ht);
            dem+=1;
        }
    }
}
int main(){
    FILE *f;
    f=fopen("TTSV.input.txt", "r");
    if(f==NULL){
        printf("Khong co file.");
        return 0;
    }
    else{
        int n;
        fscanf(f, "%d", &n);
        sv a[n];
        for(int i=0; i<n; i++){
            long long msv;
            fscanf(f, "%lld", &msv);
            a[i].msv=msv;
            char s[1000];
            fgets(s, sizeof(s), f);
            char tmp[1000][100], m=0;
            char *xau=strtok(s, " ");
            while(xau!=NULL){
                strcpy(tmp[m], xau);
                m+=1;
                xau=strtok(NULL, " ");
            }
            a[i].d4= atof(tmp[m-1]);
            a[i].d3=atof(tmp[m-2]);
            a[i].d2=atof(tmp[m-3]);
            a[i].d1=atof(tmp[m-4]);
            char ht[1000]="";
            for(int j=0; j<m-4; j++){
                strcat(ht, tmp[j]);
                strcat(ht, " ");
            }
            strcpy(a[i].ht, ht); 
        }
        qsort(a, n, sizeof(struct sv),cmp);
        long long msv;
        scanf("%lld", &msv);
        bangDiem(a, msv, n);
        hocBong(a, n);
    }
    fclose(f);
    return 0;
}