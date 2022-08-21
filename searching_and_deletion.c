//program searches a particular value and delete it at all places of occurance
#include<stdio.h>
int main()
{
    int b,c,f=0;
    printf("enter the number of elements\n");
    scanf("%d",&c);
    int a[c];
    printf("enter the elements\n");
    for(int i=0;i<c;i++)
    scanf("%d",&a[i]);
    printf("enter the element you want to search and delete\n");
    scanf("%d",&b);
    for(int i=0;i<c;i++)
    {
        if(a[i]==b)
        {
            for(int j=i;j<c;j++)
            a[j]=a[j+1];
            c--;
            i--;
            f++;
        }
    }
    if(f==0)
    printf("element not found\n");
    else
    {
    printf("array after deletion of all undesired elements -\n");
    for(int i=0;i<c;i++)
    printf("%d\n",a[i]);
    }
}    
