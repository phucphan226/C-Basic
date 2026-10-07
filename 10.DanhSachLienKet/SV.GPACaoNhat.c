#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    char msv[1000];
    char ht[1000];
    float gpa;
    struct node *next;
};
typedef struct node *node;
node makeNode(char msv[], char ht[], float gpa){
    node newNode=(node)malloc(sizeof(struct node));
    strcpy(newNode->msv, msv);
    strcpy(newNode->ht, ht);
    newNode->gpa=gpa;
    newNode->next=NULL;
    return newNode;
}
void insertLast(node *head, char msv[], char ht[], float gpa){
    node newNode=makeNode(msv, ht, gpa);
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
float max=-1e9;
void findMax(node head){
    while(head!=NULL){
        if(head->gpa>max){
            max=head->gpa;
        }
        head=head->next;
    }
}
void duyet(node head){
    while(head!=NULL){
        if(head->gpa==max){
            printf("%s %s %.2f\n", head->msv, head->ht, head->gpa);
        }
        head=head->next;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char msv[1000], ht[1000];
    float gpa;
    node head=NULL;
    for(int i=1; i<=n; i++){
        gets(msv);
        gets(ht);
        scanf("%f", &gpa);
        getchar();
        insertLast(&head, msv, ht, gpa);
    }
    findMax(head);
    duyet(head);
    return 0;
}