#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
void initializeArray(int n, int a[], int max, int min){
    for(int i=0; i<n; i++){
        a[i]=min+rand()%(max-min+1);
    }
}

int minIndex(int a[], int n, int *comps){
    int min=a[0], cs=0;
    for(int i=1; i<n; i++){
        *comps+=1;
        if(a[i]<min){
            min=a[i];
            cs=i;
        }
    }
    return cs;
}

int main(){
    // time_t t;
    // srand((unsigned)time(&t));
    // int n=10, comps=0, min=-2*n, max=2*n, a[10001];
    // int k[3]={100, 1000, 10000};
    // for(int i=0; i<3; i++){
    //     printf("k=%d:\n", k[i]);
    //     int fre[10001]={0}, idx=0;
    //     float mean=0;
    //     for(int j=1; j<=k[i]; j++){
    //         initializeArray(n, a, max, min);
    //         int x=rand()%n, comps=0;
    //         linearSearch(n, a, a[x], &comps);
    //         fre[comps]+=1;
    //         idx+=1;
    //         mean+=1.0*comps;
    //     }
    //     mean/=k[i];
    //     printf("Bang tan so:\n");
    //     for(int j=1; j<=10; j++){
    //         if(fre[j]!=0) printf("%d %d\n", j, fre[j]);
    //     }
    //     printf("Trung binh cong: %.2f\n", mean);
    //     printf("\n\n");
    // }
    int comps=0;
    printf("%d\n", UCLN(21, 14, &comps));
    printf("%d", comps);
    return 0;
}