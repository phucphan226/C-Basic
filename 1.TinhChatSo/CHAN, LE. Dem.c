#include <stdio.h>
#include<math.h>
int main(){
int n, a;
printf("Nhap n:");
scanf("%d", &n);
int chan=0;
int le=0;
while (n!=0){
    a=n%10;
    if(a%2==0){
        chan+=1;
    }
    else{
        le+=1;
    }
    n/=10;
}
printf("\nTong so chu so chan=%d", chan);
printf("\nTong so chu so le=%d", le);
return 0;
}
