#include<stdio.h>//this program is without sorting 
int main()
{
    int a[5];
    printf("enter the elements\n");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    int max,s;
    if(a[0]>a[1])
    {
       max=a[0];s=a[1];
    }
    else
    {
        max=a[1];s=a[0];
    }
    for(int i=2;i<5;i++)
    {
        if(a[i]>max)
        {
            s=max;
            max=a[i];
        }
        else if(s<a[i])
        {
            s=a[i];
        }
    }
    printf("%d\n",s);
}
