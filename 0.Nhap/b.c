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
void insertFirst(node *head, int x){
    node newNode=makeNode(x);
    if(*head==NULL){
        *head=newNode;
        return;
    }
    newNode->next=*head;
    *head=newNode;
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
        while(head!=NULL){
            printf("%d ", head->data);
            head=head->next;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    node head=NULL;
    char s[1000];
    for(int i=1; i<=n; i++){
        scanf("%s", s);
        if(strcmp(s, "push")==0){
            int so;
            scanf("%d", &so);
            insertFirst(&head, so);
        }
        if(strcmp(s, "pop")==0){
            deleteFirst(&head);
        }
        if(strcmp(s, "show")==0){
            duyet(head);
            printf("\n");
        }
    }
    return 0;
}