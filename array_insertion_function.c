#include<stdio.h>
void insert(int a[],int b,int k,int c)
{
    for(int i=b;i>k-1;i--)
    a[i]=a[i-1];
    a[k-1]=c;
    b++;
    for(int i=0;i<b;i++)
    printf("%d\n",a[i]);
}
int main()
{
    int a[100],b,k,c;
    printf("enter the number of elements\n");
    scanf("%d",&b);
    printf("enter the elements\n");
    for(int i=0;i<b;i++)
    scanf("%d",&a[i]);
    printf("enter the place where you want to insert\n");
    scanf("%d",&k);
    printf("enter the value you want to insert\n");
    scanf("%d",&c);
    insert(a,b,k,c);
}    
    
