#include <stdio.h>
void enqueue(int *a,int d,int *rear,int *front)
{
    if(*rear==5-1)
    printf("overflow\n");
    else
    {
        if(*front=-1)
        *front=0;
        *rear=*rear+1;
        a[*rear]=d;
    }
}
void dequeue(int *a,int *rear,int *front)
{
    if(*front==-1)
    printf("underflow\n");
    else
    {
        printf("%d",a[*front]);
        *front=*front+1;
        if(*front==(*rear+1))
        {
        *front=-1;
        *rear=-1;
        }
    }
}
void traverse(int *a,int *rear,int *front)
{
    for(int i=*front;i<=*rear;i++)
    printf("%d\n",a[i]);
}
int main()
{
    int rear=-1;
    int front=-1;
    int a[5];
    printf("enter the operation you want to perform\n1-enqueue\n2-dequeue\n3-traversal\nenter any number for exit\n");
    int c;
    while(1)
    {
        scanf("%d",&c);
        if(c==1)
        {
            printf("enter the value\n");
            int d;
            scanf("%d",&d);
        enqueue(a,d,&rear,&front);
        }
        else if(c==2)
        dequeue(a,&rear,&front);
        else if(c==3)
        traverse(a,&rear,&front);
        else
        break;
    }
}
