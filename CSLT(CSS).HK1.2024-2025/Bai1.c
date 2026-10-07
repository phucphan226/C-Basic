#include<stdio.h>
#include<math.h>
void printMultiplicationTable(int range, int num){
    for(int i=1; i<=range; i++){
        printf("%d*%d=%d\n", num, i, num*i);
    }
}
int main(){
    int num, range;
    scanf("%d%d", &num, &range);
    printMultiplicationTable(range, num);
    return 0;
}