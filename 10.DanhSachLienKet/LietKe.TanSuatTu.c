#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    char data[1000];
    int sl;
    struct node *next;
};
typedef struct node *node;
node makeNode(char c[]){
    node newNode=(node)malloc(sizeof(struct node));
    strcpy(newNode->data, c);
    newNode->sl=1;
    newNode->next=NULL;
    return newNode;
}
void insertLast(node *head, char c[]){
    node newNode=makeNode(c);
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
void duyet(node head){
    while(head!=NULL){
        printf("%s %d\n", head->data, head->sl);
        head=head->next;
    }
}
int main(){
    node head=NULL;
    char c[10000];
    while(gets(c)!=NULL){
        char *xau=strtok(c, " ");
        while(xau!=NULL){
            int check=1;
            node tmp=head;
            while(tmp!=NULL){
                if(strcmp(xau, tmp->data)==0){
                    check=0;
                    tmp->sl++;
                    break;
                }
                tmp=tmp->next;
            }
            if(check==1){
                insertLast(&head, xau);
            }
            xau=strtok(NULL, " ");
        }
    }
    duyet(head);
    return 0;
}