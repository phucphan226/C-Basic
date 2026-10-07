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
void insertFirst(node *head, int x){
    node newNode=makeNode(x);
    if(*head==NULL){
        *head=newNode;
    }
    else{
        newNode->next=*head;
        (*head)->prev=newNode;
        *head=newNode;        
    }
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
void insert(node *head, int k, int x){
    node newNode=makeNode(x);
    int n=dem(*head);
    if(k<1||k>n+1){
        return;
    }
    else if(k==1){
        insertFirst(head, x);
    }
    else if(k==n+1){
        insertLast(head, x);
    }
    else{
        node tmp=*head;
        for(int i=1; i<k-1; i++){
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        newNode->prev=tmp;
        tmp->next=newNode;
        newNode->next->prev=newNode;
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
    (*head)->prev=NULL;
    free(tmp);
}
void deleteLast(node *head){
    if(*head==NULL){
        return;
    }
    int n=dem(*head);
    node tmp=(*head);
    if(tmp->next==NULL){
        *head=NULL;
        free(tmp);
        return;
    }
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
        for(int i=1; i<k; i++){
            tmp=tmp->next;
        }
        tmp->prev->next=tmp->next;
        tmp->next->prev=tmp->prev;
        free(tmp);
    }
}
void sort(node *head){
    for(node i=*head; i!=NULL; i=i->next){
        node min_pos=i;
        for(node j=i->next; j!=NULL; j=j->next){
            if(j->data<min_pos->data){
                min_pos=j;
            }
        }
        int tmp=i->data;
        i->data=min_pos->data;
        min_pos->data=tmp;
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
void duyetXuoi(node head){
    while(head!=NULL){
        printf("%d ", head->data);
        head=head->next;
    }
}
void duyetNguoc(node head){
    while(head->next!=NULL){
        head=head->next;
    }
    while(head!=NULL){
        printf("%d ", head->data);
        head=head->prev;
    }
}
int main(){
    node head=NULL;
    printf("-----------------DSLK------------------\n");
    printf("0.Thoat.\n");
    printf("1.Them vao dau.\n");
    printf("2.Them vao cuoi.\n");
    printf("3.Them vao giua.\n");
    printf("4.Xoa phan tu o dau.\n");
    printf("5.Xoa phan tu o cuoi.\n");
    printf("6.Xoa phan tu o giua.\n");
    printf("7.Sap xep.\n");
    printf("8.Duyet xuoi.\n");
    printf("9.Duyet nguoc.\n");
    printf("10.Kich thuoc.\n");
    printf("---------------------------------------\n\n");
    for(int i=1; ; i++){
        printf("Nhap lua chon:");
        int lc;
        scanf("%d", &lc);
        if(lc==0){
            break;
        }
        else if(lc==1){
            printf("Nhap gia tri can them: ");
            int x;
            scanf("%d", &x);
            insertFirst(&head, x);
        }
        else if(lc==2){
            printf("Nhap gia tri can them: ");
            int x;
            scanf("%d", &x);
            insertLast(&head, x);
        }
        else if(lc==3){
            printf("Nhap vi tri can chen: ");
            int k;
            scanf("%d", &k);
            printf("Nhap gia tri can them: ");
            int x;
            scanf("%d", &x);
            insert(&head, k, x);
        }
        else if(lc==4){
            deleteFirst(&head);
        }
        else if(lc==5){
            deleteLast(&head);
        }
        else if(lc == 6){
            printf("Nhap vi tri can xoa: ");
            int k;
            scanf("%d", &k);
            delete(&head, k);
        }
        else if(lc==7){
            sort(&head);
        }
        else if(lc==8){
            printf("Mang co cac phan tu khi duyet xuoi la: ");
            duyetXuoi(head);
            printf("\n");
        }
        else if(lc==9){
            printf("Mang co cac phan tu khi duyet nguoc la: ");
            duyetNguoc(head);
            printf("\n");
        }
        else if(lc==10){
            printf("Mang co so phan tu la: %d", dem(head));
            printf("\n");
        }
        else {
            printf("Gia tri khong hop le.\n");
        }
    }
    return 0;    
}