#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * start;
// For counting number of nodes in Link list
int countLL()
{
    int count = 0;
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    return (count);
}
// Display Elements of Singly Link List
void display()
{
    struct node *ptr;
    ptr = start;
    if (ptr == NULL)
        printf("List is Empty\n");
    else
    {
        while(ptr != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
// Insertion at the Front
void inFront(int ele)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = ele;
    if (start == NULL)
    {
        new->next = NULL;
        start = new;
    }
    else
    {
        new->next = start;
        start = new;
    }
}
// Insertion at thr end
void inEnd(int ele)
{
    struct node *new, *ptr;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = ele;
    ptr = start;
    if (start == NULL)
    {
        start = new;
        start->next = NULL;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new;
        new->next = NULL;
    }
}
// Deletion from begging
int dltFront()
{
    if (start == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        struct node *ptr;
        ptr = start;
        start = ptr->next;
        int ele = ptr->data;
        free(ptr);
        return ele;
    }
}
// Deletion from End
int dltEnd()
{
    struct node *ptr, *ppreptr;
    ptr = start;
    if (start == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        struct node *ptr, *preptr;
        ptr = start;
        while (ptr->next != NULL)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = NULL;
        int ele = ptr->data;
        free(ptr);
        return ele;
    }
}
int main()
{
    int ch, ele;
    do
    {
        printf("Insert element in list\n");
        printf("1 :- From Front\n2 :- From End\n");
        printf("Delete element in list\n");
        printf("3 :- From Front\n 4:- From End\n");
        printf("5 :- Count Number of Nodes\n");
        printf("6 :- Display List\n");
        printf("7 :- Exit\n");
        printf("Enter your Choice :- ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Element to insert :- ");
            scanf("%d", &ele);
            inFront(ele);
            break;
        case 2:
            printf("Enter Element to insert :- ");
            scanf("%d", &ele);
            inEnd(ele);
            break;
        case 3:
            printf("Deleted element is :- %d\n", dltFront());
            break;
        case 4:
            printf("Deleted element is :- %d\n", dltEnd());
            break;
        case 5:
            printf("Numbers of Nodes in List :- %d\n", countLL());
            break;
        case 6:
            printf("Elements of List are :- \n");
            display();
            break;
        case 7:
            printf("Tata Bye Bye\n");
            exit(1);
        default:
            printf("Enter Valid Input\n");
            break;
        }
    } while (ch != 7);
    return 0;
}