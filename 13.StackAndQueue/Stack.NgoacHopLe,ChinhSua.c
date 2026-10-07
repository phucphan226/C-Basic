#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct Stack{
    char a[1001];
    int top;
} stack;
void init(stack *s){
    s->top=-1;
}
char isFull(stack s){
    return s.top==1000-1;
}
char isEmpty(stack s){
    return s.top==-1;
}
void push(stack *s, char x){
    if(isFull(*s)){
        return;
    }
    s->top+=1;
    s->a[s->top]=x;
}
char pop(stack *s){
    if(isEmpty(*s)){
        exit(1);
    }
    int kq=s->a[s->top];
    s->top-=1;
    return kq;
}
int len(char s[1001]){
    int kq=0, i=0;
    while(s[i]!='\0'){
        kq+=1;
        i+=1;
    }
    return kq;
}
int main(){
    char t[1001];
    gets(t);
    stack s;
    init(&s);
    int error[1001], cs=0;
    for(int i=0; i<len(t); i++){
        if(t[i]=='(' || t[i]=='{' || t[i]=='['){
            push(&s, t[i]);
        }
        else if(t[i]==')'){
            char tam=pop(&s);
            if(tam!='('){
                error[cs]=i;
                cs+=1;
                t[i]=')';
            }
            if(tam=='(') t[i]=')';
            else if(tam=='[') t[i]=']';
            else t[i]='}';
        }
        else if(t[i]==']'){
            char tam=pop(&s);
            if(tam!='['){
                error[cs]=i;
                cs+=1;
                t[i]=']';
            }
            if(tam=='(') t[i]=')';
            else if(tam=='[') t[i]=']';
            else t[i]='}';
        }
        else if(t[i]=='}'){
            char tam=pop(&s);
            if(tam!='{'){
                error[cs]=i;
                cs+=1;
                t[i]='}';
            }
            if(tam=='(') t[i]=')';
            else if(tam=='[') t[i]=']';
            else t[i]='}';
        }
    }
    if(cs==0){
        printf("No error.");
        return 0;
    }
    printf("Error at ");
    for(int i=0; i<cs; i++){
        printf("%d", error[i]);
        if(i!=cs-1) printf(", ");
    }
    printf("\n");
    printf("%s", t);
    return 0;
}