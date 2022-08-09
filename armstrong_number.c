#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("enter a number");
    scanf("%d",&a);
    int c=a;
    while(a!=0)
    {
        int d=a%10;
        sum=sum+(d*d*d);
        a=a/10;
    }
    printf("%d\n",c);
    printf("%d\n",sum);
    if(sum==c)
    printf("armstrong number\n");
    else
    printf("not a armstrong number\n");
}
