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
void insertFirst(node *head, char msv[], char ht[], float gpa){
    node newNode=makeNode(msv, ht, gpa);
    if(*head==NULL){
        *head=newNode;
    }
    else{
        newNode->next=*head;
        *head=newNode;
    }
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
void insert(node *head, int k, char msv[], char ht[], float gpa){
    node newNode=makeNode(msv, ht, gpa);
    int n=dem(*head);
    if(k<1||k>n+1){
        return;
    }
    else if(k==1){
        insertFirst(head, msv, ht, gpa);
    }
    else if(k==n+1){
        insertLast(head, msv, ht, gpa);
    }
    else{
        node tmp=*head;
        for(int i=1; i<k-1; i++){
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next=newNode;
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
    while(head!=NULL){
        printf("%s %s %.2f\n", head->msv, head->ht, head->gpa);
        head=head->next;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    char msv[1000], ht[1000];
    float gpa;
    node head=NULL;
    for(int i=1; i<=n; i++){
        int lc;
        scanf("%d", &lc);
        getchar();
        if(lc==1){
            gets(msv);
            gets(ht);
            scanf("%f", &gpa);
            getchar();
            insertFirst(&head, msv, ht, gpa);
        }
        else if(lc==2){
            gets(msv);
            gets(ht);
            scanf("%f", &gpa);
            getchar();
            insertLast(&head, msv, ht, gpa);
        }
        else if(lc==3){
            int vt;
            scanf("%d", &vt);
            getchar();
            gets(msv);
            gets(ht);
            scanf("%f", &gpa);
            getchar();
            insert(&head, vt, msv, ht, gpa);
        }
    }
    duyet(head);
    return 0;
}
