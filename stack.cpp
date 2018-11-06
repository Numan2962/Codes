#include<bits/stdc++.h>
using namespace std;
#define M 100
typedef struct {
    int top;
    int data[M];
}Stack;
int n;
void push(Stack *s,int value)
{
    s->data[s->top]=value;
    s->top+=1;
}
int pop(Stack *s)
{
    int value;
    if(s->top==0)
    {
        printf("Stack underflow\n");
        return -1;
    }
    s->top-=1;
    value=s->data[s->top];
    return value;
}
int main()
{
    int x=0,v;
    Stack s;
    s.top=0;
    printf("Size: ");
    scanf("%d",&n);
    while(x==0||x==1)
    {
        printf("Enter 0 to push,1 to pop,other digit to stop\n");
        scanf("%d",&x);
        if(x==0)
        {
            if(s.top==n)
                printf("Stack Overflow\n");
            else
            {
                printf("value: ");
                scanf("%d",&v);
                push(&s,v);
            }
        }
        else if(x==1)
        {
            v=pop(&s);
            if(v!=-1)
                printf("%d\n",v);
        }
    }

    return 0;
}
