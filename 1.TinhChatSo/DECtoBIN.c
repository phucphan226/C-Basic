#include<stdio.h>
#include<math.h>
int main()
{
int n,a[100],i=0;
printf("Nhap n:");
scanf("%d", &n);
while(n<=0||n>=100){
    printf("Gia tri khong thoa man, nhap lai.");
    printf("\nNhap n:");
    scanf("%d", &n);
   }
while(n>0&&n<100){
    a[i]=n%2;
    n=n/2;
    i++;
}
printf("So thap phan la:");
for(int j=i-1; j>=0; j--){
    printf("%d", a[j]);
}
return 0;
}

