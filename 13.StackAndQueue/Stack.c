#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 5
#define ERROR -9999
typedef struct Stack{
    int a[MAX];
    int top;
} stack;
void init(stack *s){
    s->top=-1;
}
int isEmpty(stack s){
    return s.top==-1;
}
int isFull(stack s){
    return s.top==MAX-1;
}
void push(stack *s, int x){
    if(isFull(*s)){
        printf("Stack day\n");
        return;
    }
    s->top+=1;
    s->a[s->top]=x;
}
int pop(stack *s){
    if(isEmpty(*s)){
        printf("Stack rong\n");
        return ERROR;
    }
    int kq=s->a[s->top];
    s->top-=1;
    return kq;
}
void display(stack s){
    if(s.top==-1){
        printf("Stack rong\n");
        return;
    }
    for(int i=0; i<=s.top; i++){
        printf("%d ", s.a[i]);
    }
    printf("\n");
}
int main(){
    stack s;
    init(&s);
    int num[6] = {1,-2,3,-4,5,-6};
    printf("PUSH\n");
    for (int i = 0; i < 6; i++){
        printf("push %d: \n",num[i]);
        push(&s,num[i]);
        display(s);
    }
    printf("POP\n");
    int i = 0;
    while(!isEmpty(s)) {
        printf("pop %d: %d\n",i, pop(&s));
        display(s);
        i++;
    }
    return 0;
}