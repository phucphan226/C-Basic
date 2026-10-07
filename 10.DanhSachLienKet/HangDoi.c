#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node *node;
node makeNode(int x){
    node newNode=(node)malloc(sizeof(struct node));
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
void insertLast(node *head, int x){
    node newNode=makeNode(x);
    if(*head==NULL){
        *head=newNode;
        return;
    }
    node tmp=*head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void deleteFirst(node *head){
    if(*head==NULL){
        return;
    }
    node tmp=*head;
    if(tmp->next==NULL){
        *head=NULL;
        free(tmp);
        return;
    }
    (*head)=(*head)->next;
    free(tmp);
}
void duyet(node head){
    if(head==NULL){
        printf("EMPTY\n");
    }
    else{
         printf("%d ", head->data);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    char c[1000];
    node head=NULL;
    for(int i=1; i<=n; i++){
        scanf("%s", c);
        if(strcmp(c, "push")==0){
            int data;
            scanf("%d", &data);
            insertLast(&head, data);
        }
        if(strcmp(c, "pop")==0){
            deleteFirst(&head);
        }
        if(strcmp(c, "front")==0){
            duyet(head);
        }
    }
    return 0;
}