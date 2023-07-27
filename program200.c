#include<stdio.h>
#include<stdlib.h>
 struct node
    {
        int data;
        struct node *next;
    };
int main()
{
    struct node *Head =NULL;  //1st node Head
     struct node *newn=(struct node *)malloc(sizeof(struct node));
     newn->data=11;
     newn->next=NULL;
     printf("%d\n",newn->data);
     printf("size of structure %d",sizeof(struct node));
   


    return 0;
}