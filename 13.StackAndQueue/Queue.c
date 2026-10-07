#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 5
#define ERROR -9999
typedef struct Queue{
    int a[MAX];
    int head, tail;
} queue;
void init(queue *q){
    q->head=0;
    q->tail=-1;
}
int isEmpty(queue q){
    return q.tail<q.head;
}
int isFull(queue q){
    return q.tail==MAX-1;
}
void push(queue *q, int x){
    if(isFull(*q)){
        printf("Stack day\n");
        return;
    }
    q->tail+=1;
    q->a[q->tail]=x;
}
int pop(queue *q){
    if(isEmpty(*q)){
        printf("Stack rong\n");
        return ERROR;
    }
    int kq=q->a[q->head];
    q->head+=1;
    return kq;
}
void display(queue q){
    if(isEmpty(q)){
        printf("Stack rong\n");
    }
    for(int i=q.head; i<=q.tail; i++){
        printf("%d ", q.a[i]);
    }
    printf("\n");    
}
int main(){
    queue q;
    init(&q);
    int num[6]={1, 2, 3, 4, 5, 6};
    printf("PUT\n");
    for(int i=0; i<6; i++){
        printf("Put %d: \n", num[i]);
        push(&q, num[i]);
        display(q);
    }
    printf("GET\n");
    int i=0;
    while(!isEmpty(q)){
        printf("Get %d: %d\n", i, pop(&q));
        display(q);
        i+=1;
    }
    return 0;
}