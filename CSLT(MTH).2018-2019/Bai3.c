#include<stdio.h>
void nhap(int tn){
    for(int i=1; ;i++){
        scanf("%d", &tn);
        if(tn==0){
            break;
        }
        printf("%d ", tinhtien(tn));
    }
}
int tinhtien(int tn){
    int tong;
    if(tn<=100){
        tong=50000;
    }
    else if(tn>100&&tn<=200){
        tong=50000+(tn-100)*300;
    }
    else{
        tong=50000+100*300+(tn-200)*400;
    }
    return tong;
}
int main(){
    int tn;
    nhap(tn);
}