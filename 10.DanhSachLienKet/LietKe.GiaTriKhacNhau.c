#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node *node;
node makeNode(int x){
    node newNode=(node)malloc(sizeof(struct node));
    newNode->data=x;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}
void insertLast(node *head, int x){
    node newNode=makeNode(x);
    if(*head==NULL){
        *head=newNode;
    }
    else{
        node tmp=*head;
        while(tmp->next!=NULL){
            tmp=tmp->next;
        }
        tmp->next=newNode;
        newNode->prev=tmp;
    }
}
void check(node head){
    for(node i=head; i!=NULL; i=i->next){
        int check=1;
        for(node j=head; j!=i; j=j->next){
            if(j->data==i->data){
                check=0;
                break;
            }
        }
        if(check==1){
            printf("%d ", i->data);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    node head=NULL;
    for(int i=1; i<=n; i++){
        int data;
        scanf("%d", &data);
        insertLast(&head, data);
    }
    check(head);
    return 0;
}