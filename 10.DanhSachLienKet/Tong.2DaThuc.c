#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    int bac;
    int heso;
    struct node *next;
};
typedef struct node *node;
node makeNode(int bac, int heso){
    node newNode=(node)malloc(sizeof(struct node));
    newNode->bac=bac;
    newNode->heso=heso;
    newNode->next=NULL;
    return newNode;
}
void insertLast(node *head, int bac, int heso){
    node tmp=*head;
    int check=0;
    while(tmp!=NULL){
        if(tmp->bac==bac){
            check=1;
            tmp->heso+=heso;
        }
        tmp=tmp->next;
    }
    if(check==0){
        node newNode=makeNode(bac, heso);
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
}
void sort(node *head){
    for(node i=*head; i!=NULL; i=i->next){
        node max_pos=i;
        for(node j=i->next; j!=NULL; j=j->next){
            if(j->bac>max_pos->bac){
                max_pos=j;
            }
        }
        int tmp1=i->bac;
        i->bac=max_pos->bac;
        max_pos->bac=tmp1;
        int tmp2=i->heso;
        i->heso=max_pos->heso;
        max_pos->heso=tmp2;
    }
}
void duyet(node head){
    while(head!=NULL){
        printf("%dx^%d", head->heso, head->bac);
        if(head->next!=NULL){
            printf(" + ");
        }
        head=head->next;
    }
}
int main(){
    node head=NULL;
    char a[10000];
    char b[10000];
    gets(a);
    gets(b);
    int m=0, n=0;
    char p[1000][100];
    char h[1000][100];
    char *xau=strtok(a, " +");
    while(xau!=NULL){
        strcpy(p[m], xau);
        m++;
        xau=strtok(NULL, " +");
    }
    for(int i=0; i<m; i++){
        char *xau1=strtok(p[i], "x^");
        int cnt=0;
        int heso, bac;
        while(xau1!=NULL){
            cnt++;
            if(cnt==1){
                heso=atoi(xau1);
            }
            if(cnt==2){
                bac=atoi(xau1);
            }
            xau1=strtok(NULL, "x^");
        }
        insertLast(&head, bac, heso);
    }
    char *str=strtok(b, " +");
    while(str!=NULL){
        strcpy(h[n], str);
        n++;
        str=strtok(NULL, " +");
    }
    for(int i=0; i<n; i++){
        char *str1=strtok(h[i], "x^");
        int cnt=0;
        int heso, bac;
        while(str1!=NULL){
            cnt++;
            if(cnt==1){
                heso=atoi(str1);
            }
            if(cnt==2){
                bac=atoi(str1);
            }
            str1=strtok(NULL, "x^");
        }
        insertLast(&head, bac, heso);
    }
    sort(&head);
    duyet(head);
    return 0;
}