
// menu driven program for matrix operations
#include <stdio.h>
int main() 
{
    int a,b,c,d;
    printf("enter the rows and columns\n");
    scanf("%d %d",&a,&b);
    int e[a][b];
    printf("enter the elements\n");
    for(int i=0;i<a;i++)
    {
         for(int j=0;j<b;j++)
         scanf("%d",&e[i][j]);
    }
    int f;
    printf("enter the operation you want to perform\n1-addition\n2-subtraction\n3-multiplication\n4-transpose\n");
    scanf("%d",&f);
    if(f==1||f==2||f==3)
    {
    printf("enter the rows and columns\n");
    scanf("%d %d",&c,&d);
    int g[c][d];
    int h[a][d];
    printf("enter the elements");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        scanf("%d",&g[i][j]);
    }
    if(f==1)
    {
      if(a==c&&b==d)
      {
      for(int i=0;i<a;i++)
      {
          for(int j=0;j<b;j++)
          {
              printf("%d ",e[i][j]+g[i][j]);
          }
          printf("\n");
      }
    }
    else
    printf("invalid operation not compatible matrices\n");
    }
    if(f==2)
    {
      if(a==c&&b==d)
      {
      for(int i=0;i<a;i++)
      {
          for(int j=0;j<b;j++)
          {
              printf("%d ",g[i][j]-e[i][j]);
          }
          printf("\n");
      }
      }
      else
      printf("invalid operation not comaptible matrices\n");
    }
    if(f==3)
    {
        if(b==c)
        {
           for(int i=0;i<a;i++)
           {
               for(int j=0;j<d;j++)
               {
                   h[i][j]=0;
                   for(int k=0;k<b;k++)
                   {
                       h[i][j]=h[i][j]+(e[i][k]*g[k][j]);
                   }
                   printf("%d ",h[i][j]);
               }
               printf("\n");
           }
        }
        else
        printf("invalid operation not compatible matrices\n");
    }
    }
    else if(f==4)
    {
        printf("transpose of the matrix is\n");
        for(int i=0;i<b;i++)
        {
            for(int j=0;j<a;j++)
            {
                printf("%d ",e[j][i]);
            }
            printf("\n");
        }
    }
    else
    printf("*****entered option is invalid*****\nexecution stops.......\nprogram exits......\n");
}

