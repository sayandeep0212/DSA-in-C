/*Write a menu based c program to perform the following operations in singly linked list
1.add at beginning
2.append
3.Add after
4.display
5.count
6.delete
7.reverse print
8.reverse list
9.searching
10.sorting
*/ 


#include<stdio.h>
#include<stdlib.h>
void add_at_begin();
void append();
void add_after();
void display();
int count();
void delet();
void reverse_print();
void reverse_list();
void searching();
void sorting();

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void main()
{
    printf("\n Implemetation of a singly linked list");
    while (1)
    {
        printf("\n\n1.add at beginning\n2.append\n3.Add after\n4.display\n5.count\n6.delete\n7.reverse print\n8.reverse list\n9.searching\n10.sorting\n11.exit");
        printf("\nEnter your choice (1-11): ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nAdd at begin");
                add_at_begin();
                break;
            case 2:
            printf("\nAppend");
                append();
                break;
            case 3:
            printf("\nAdd after");
                add_after();
                break;
            case 4:
            printf("\nDisplay");
                display();
                break;
            case 5:
            printf("\nCount");  
                int c= count();
                printf("\n No. of Nodes=%d",c);
                break;
            case 6:
                delet();
                break;
            case 7:
                reverse_print();
                break;
            case 8:
                reverse_list();
                break;
            case 9:
                searching();
                break;
            case 10:
                sorting();
                break;
            case 11:
                exit(0);
            default:
                printf("\nInvalid choice,try again (1-11)");
        }

    }


}


void add_at_begin()
{
 struct node *nw;
 nw = (struct node *) malloc(sizeof(struct node));
int num;
printf("enter the integer number:");
scanf("%d",&num);
nw->data=num;
nw->next=head;
head=nw;
printf("\nNode added at beginning");
}
void append()
{
    struct node *nw;
    struct node *temp;
    nw = (struct node *) malloc(sizeof(struct node));
    if (nw == NULL)
    {
        printf("\nMemory allocation failed");
        return;
    }
    int num;
    printf("enter the integer number:");
    scanf("%d",&num);
    nw->data=num;
    nw->next=NULL;

    if(head==NULL)
    {
        head=nw;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nw;
    }
    printf("\nNode appended");
}

void add_after()
{
    struct node *temp, *nw;
    int pos, num;
    if (head == NULL)
    {
        printf("\nList is empty");
        return;
    }
    printf ("Enter Number and Position after which to add: ");
    scanf("%d %d", &num, &pos);
    nw = (struct node *) malloc(sizeof(struct node));
    if (nw == NULL)
    {
        printf("\nMemory allocation failed");
        return;
    }
    nw->data = num;
    nw->next = NULL;
    temp=head;
    for(int i=1; i<pos && temp!=NULL; i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("\nPosition not found");
        return;
    }
    nw->next=temp->next;
    temp->next=nw;
    printf("\nNode added after position %d", pos);
}

void display()
{
    struct node *current = head;

    if (current == NULL)
    {
        printf("\nList is empty");
        return;
    }

    printf("\nList: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
}

int count()
{

}

void delet()
{

}

void reverse_print()
{

}

void reverse_list()
{

}

void searching()
{

}

void sorting()
{

}