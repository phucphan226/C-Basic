#include<stdio.h>
#include<math.h>
int main(){
    float a[100000];
    int icheck;
    for(int i=0; ; i++){
        float x;
        scanf("%f", &x);
        if(x<0.0){
            break;
        }
        else{
            a[i]=x;
        }
        icheck=i;
    }
    for(float i=0; i<=10; i+=0.5){
        int dem=0;
        for(int j=0; j<=icheck; j++){
            if(a[j]==i){
                dem+=1;
            }
        }
        printf("So diem %.1f la:%d", i, dem);
        printf("\n");
    }
}