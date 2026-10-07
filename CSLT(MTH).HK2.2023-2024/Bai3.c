#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    float tong=0.0;
    for(int i=1; ; i++){
        int sotram;
        printf("So tram cua tuyen thu %d:", i);
        scanf("%d", &sotram);
        if(sotram==0){
            break;
        }
        else{
            float culy[sotram];
            printf("Cu ly cua tuyen thu %d:", i);
            for(int i=0; i<sotram-1; i++){
                scanf("%f", &culy[i]);
            }
            float giave;
            printf("Gia ve cua tuyen thu %d:", i);
            scanf("%f", &giave);
            int vitrilen, vitrixuong;
            printf("Vi tri tram khach len va xuong cua tuyen thu %d:", i);
            scanf("%d%d", &vitrilen, &vitrixuong);
            float a=(float)(vitrixuong-vitrilen)/(sotram-1);
            if(a<0.25){
                tong+=0.25*giave;
            }
            else if(a>=0.25&&a<0.5){
                tong+=0.5*giave;
            }
            else if(a>=0.5&&a<0.75){
                tong+=0.75*giave;
            }
            else{
                tong+=1*giave;
            }
        }
    }
    printf("So tien khach phai tra: %.2f", tong);
}