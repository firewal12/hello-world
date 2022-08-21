#include<stdio.h>
int main()
{
    int t=0;
    printf("enter the size of the stack\n");
    int b;
    scanf("%d",&b);
    int a[b];
    printf("enter the operation you want to perform\n1-push\n2-pop\n3-exit");
    int c;
    scanf("%d",&c);
    while(1)
    {
        if(c==1)
        {
            if(t==b-1)
            printf("stack overflow\n");
            else
            {
            printf("enter the value you want to push\n");
            int d;
            scanf("%d",&d);
            a[t]=d;
            t++;
            }
        }
        if(c==2)
        {
            t--;
            if(t==-1)
            printf("stack underflow\n");
            else
            printf("%d",a[t]);
        }
        if(c==3)
        break;
        scanf("%d",&c);
    }
}
