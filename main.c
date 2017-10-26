#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp2=head;
    temp->data = x
       ;
    if(head == NULL)
    {
        temp->next = head;
        head = temp;
        return;
    }
    while(temp2->next!=NULL)
       {
        temp2=temp2->next;}
    temp->next = temp2->next;
    temp2->next = temp;
    }

void print()
{
    struct Node*temp=head;
    printf("print the list!\n");
    while(temp!=NULL){
        printf("%d\n",temp->data);
    temp=temp->next;
    }
}


int main()
{
    head = NULL;
    int n,x,i;
    printf("enter the number of element");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the number\n");
        scanf("%d",&x);
        insert(x);
    }
    print();

    return 0;
}
