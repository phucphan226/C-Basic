#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 7
#define ERROR -9999
typedef struct CircularQueue{
    int a[MAX];
    int head, tail;
} circularQueue;
void init(circularQueue *q){
    q->head=0;
    q->tail=-1;
}
int isEmpty(circularQueue q){
    return q.tail<q.head;
}
int isFull(circularQueue q){
    return q.tail-q.head==MAX-1;
}
void push(circularQueue *q, int x){
    if(isFull(*q)){
        printf("circularQueue day\n");
        return;
    }
    q->tail+=1;
    q->a[q->tail%MAX]=x;
}
int pop(circularQueue *q){
    if(isEmpty(*q)){
        printf("circularQueue rong\n");
        return ERROR;
    }
    int kq=q->a[q->head%MAX];
    q->head+=1;
    return kq;
}
void display(circularQueue q){
    if(isEmpty(q)){
        printf("circularQueue rong\n");
        return;
    }
    if(q.head%MAX<=q.tail%MAX){
        for(int i=q.head%MAX; i<=q.tail%MAX; i++){
            printf("%d ", q.a[i]);
        }
        printf("\n");
    }
    else{
        for(int i=q.head%MAX; i<MAX; i++){
            printf("%d ", q.a[i]);
        }
        for(int i=0; i<=q.tail%MAX; i++){
            printf("%d ", q.a[i]);
        }
        printf("\n");
    }

}
int main(){
    circularQueue q;
    init(&q);
    //MAX = 7
    printf("MAX = %d\n", MAX);

    //circularQueue is empty at beginning
    init(&q);
    display(q);
    printf("\n\n");
    
    //push(-5) push(2) push(4) push(-3) push(1) push(0) push(9)
    printf("PUT\n");
    int num1[7]={-5, 2, 4, -3, 1, 0, 9};
    for (int i = 0; i < 7; i++){
        printf("put %d: \n",num1[i]);
        push(&q,num1[i]); 
        display(q);
        printf("\n");
    }
    printf("\n");

    printf("GET\n");
    for (int i=1; i<=5; i++){
        printf("get %d: %d\n",i, pop(&q));
        display(q);
        printf("\n");
    }   
    printf("\n");

    //push(8) push(4) push(-3)
    printf("PUT\n");
    int num2[3]={8, 4, -3};
    for (int i = 0; i < 3; i++){
        printf("put %d: \n",num2[i]);
        push(&q,num2[i]);
        display(q);
        printf("\n");
    }
    printf("\n");

    //Get Get Get
    printf("GET\n");
    for (int i=1; i<=3; i++){
        printf("get %d: %d\n",i, pop(&q));
        display(q);
        printf("\n");
    }   
    return 0;
}