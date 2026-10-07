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
    *head=(*head)->next;
    free(tmp);
}
void deleteLast(node *head){
    if(*head==NULL){
        return;
    }
    node tmp=*head;
    if(tmp->next==NULL){
        *head=NULL;
        free(tmp);
        return;
    }
    int n=dem(*head);
    for(int i=1; i<n-1; i++){
        tmp=tmp->next;
    }
    node tmp1=tmp->next;
    tmp->next=NULL;
    free(tmp1);
}
void delete(node *head, int k){
    int n=dem(*head);
    if(k<1||k>n){
        return;
    }
    else if(k==1){
        deleteFirst(head);
    }
    else if(k==n){
        deleteLast(head);
    }
    else{
        node tmp=*head;
        for(int i=1; i<k-1; i++){
            tmp=tmp->next;
        }
        node tmp1=tmp->next;
        tmp->next=tmp->next->next;
        free(tmp1);
    }
}
int dem(node head){
    int dem=0;
    while(head!=NULL){
        dem++;
        head=head->next;
    }
    return dem;
}
void dk(node head, int x){
    int n=dem(head);
    int cnt=0;
    node tmp=head;
    while(tmp!=NULL){
        if(tmp->data==x){
            cnt++;
        }
        tmp=tmp->next;
    }
    if(cnt==n){
        printf("EMPTY");
    }
    else{
        node tmp1=head;
        while(tmp1!=NULL){
            if(tmp1->data!=x){
                printf("%d ", tmp1->data);
            }
            tmp1=tmp1->next;
        }
    }
}
int  main(){
    node head=NULL;
    int n, x;
    scanf("%d%d", &n, &x);
    for(int i=1; i<=n; i++){
        int data;
        scanf("%d", &data);
        insertLast(&head, data);
    }
    dk(head, x);
    return 0;
}