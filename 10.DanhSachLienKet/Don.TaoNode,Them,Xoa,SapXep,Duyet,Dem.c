#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;
struct List{
    node *head;
};
typedef struct List list;
void init(list *a){
    a->head=NULL;
}
node *makeNode(int x){
    node *newNode=(node*)malloc(sizeof(node));
    newNode->next=NULL;
    newNode->data=x;
    return newNode;
}
void duyet(list *a){
    node *tam=a->head;
    while(tam!=NULL){
        printf("%d ", tam->data);
        tam=tam->next;
    }
}
int dem(list *a){
    int dem=0;
    node *tam=a->head;
    while(tam!=NULL){
        dem+=1;
        tam=tam->next;
    }
    return dem;
}
void pushFront(list *a, int x){
    node *newNode=makeNode(x);
    newNode->next=a->head;
    a->head=newNode;
}
void pushBack(list *a, int x){
    node *newNode=makeNode(x);
    if(a->head==NULL) a->head=newNode;
    else{
        node *tam=a->head;
        while(tam->next!=NULL){
            tam=tam->next;
        }
        tam->next=newNode;
    }
}
void insert(list *a, int x, int k){
    int n=dem(a);
    if(k<1 || k>n+1) return;
    else if(k==1) pushFront(a, x);
    else if(k==n+1) pushBack(a, x);
    else{
        node *newNode=makeNode(x);
        node *tam=a->head;
        for(int i=1; i<k-1; i++){
            tam=tam->next;
        }
        newNode->next=tam->next;
        tam->next=newNode;
    }
}
void popFront(list *a){
    node *tam=a->head;
    if(tam==NULL) return;
    else{
        a->head=tam->next;
        free(tam);
    }
}
void popBack(list *a){
    node *tam=a->head;
    if(tam==NULL) return;
    else if(tam->next==NULL){
        a->head=NULL;
        free(tam);
    }
    else{
        while(tam->next!=NULL && tam->next->next!=NULL){
            tam=tam->next;
        }
        node *tam1=tam->next;
        tam->next=NULL;
        free(tam1);
    }
}
void delete(list *a, int k){
    int n=dem(a);
    node *tam=a->head;
    if(k<1 || k>n) return;
    else if(k==1) popFront(a);
    else if(k==n) popBack(a);
    else{
        for(int i=1; i<k-1; i++){
            tam=tam->next;
        }
        node *tam1=tam->next;
        tam->next=tam1->next;
        free(tam1);
    }
}
void sort(list *a){
    node *tam=a->head;
    for(node *i=tam; i!=NULL; i=i->next){
        node *minPos=i;
        for(node *j=i->next; j!=NULL; j=j->next){
            if(j->data<minPos->data){
                minPos=j;
            }
        }
        int tam=i->data;
        i->data=minPos->data;
        minPos->data=tam;
    }
}
int maduyet(){
    list a;
    init(&a);
    printf("-----------------DSLK------------------\n");
    printf("0.Thoat.\n");
    printf("1.Them vao dau.\n");
    printf("2.Them vao cuoi.\n");
    printf("3.Them vao giua.\n");
    printf("4.Xoa phan tu o dau.\n");
    printf("5.Xoa phan tu o cuoi.\n");
    printf("6.Xoa phan tu o giua.\n");
    printf("7.Sap xep.\n");
    printf("8.Duyet.\n");
    printf("9.Kich thuoc.\n");
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
            pushFront(&a, x);
        }
        else if(lc==2){
            printf("Nhap gia tri can them: ");
            int x;
            scanf("%d", &x);
            pushBack(&a, x);
        }
        else if(lc==3){
            printf("Nhap vi tri can chen: ");
            int k;
            scanf("%d", &k);
            printf("Nhap gia tri can them: ");
            int x;
            scanf("%d", &x);
            insert(&a, x, k);
        }
        else if(lc==4){
            popFront(&a);
        }
        else if(lc==5){
            popBack(&a);
        }
        else if(lc == 6){
            printf("Nhap vi tri can xoa: ");
            int k;
            scanf("%d", &k);
            delete(&a, k);
        }
        else if(lc==7){
            sort(&a);
        }
        else if(lc==8){
            printf("Mang co cac phan tu la: ");
            duyet(&a);
            printf("\n");
        }
        else if(lc==9){
            printf("Mang co so phan tu la: %d", dem(&a));
            printf("\n");
        }
        else {
            printf("Gia tri khong hop le.\n");
        }
    }
    return 0;
}