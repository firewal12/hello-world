#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *start=(struct node*)malloc(sizeof(struct node));//dynamic creation of nodes
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));
    printf("enter integer data in the nodes\n");
    scanf("%d",&start->data);//assigning data in nodes by the user
    scanf("%d",&second->data);
    scanf("%d",&third->data);
    scanf("%d",&fourth->data);
    start->link=second;//linking the nodes
    second->link=third;
    third->link=fourth;
    fourth->link=NULL;
    struct node *ptr=NULL;//pointer for traversing
    ptr=start;//assigning ptr at the starting of the link list
    while(ptr!=NULL)//traversing
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}
