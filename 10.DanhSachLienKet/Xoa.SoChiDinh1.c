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
    }
    else{
        node tmp=*head;
        while(tmp->next!=NULL){
            tmp=tmp->next;
        }
        tmp->next=newNode;
    }
}
void deleteAll(node *head, int x){
    while(*head!=NULL&&(*head)->data==x){
        node tmp=*head;
        *head=(*head)->next;
        free(tmp);
    }
    node tmp=*head;
    node pre=*head;
    while(tmp!=NULL){
        node tmp1=tmp;
        if(tmp->data==x){
            pre->next=tmp->next;
            tmp=tmp->next;
            free(tmp1);
        }
        else{
            pre=tmp;
            tmp=tmp->next;
        }
    }
}
int dem(node head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
void duyet(node head){
    int n=dem(head);
    if(n==0){
        printf("EMPTY");
    }
    else{
        while(head!=NULL){
            printf("%d ", head->data);
            head=head->next;
        }
    }
}
int main(){
    node head=NULL;
    int n, x;
    scanf("%d%d", &n, &x);
    for(int i=1; i<=n; i++){
        int data;
        scanf("%d", &data);
        insertLast(&head, data);
    }
    deleteAll(&head, x);
    duyet(head);
    return 0;
}