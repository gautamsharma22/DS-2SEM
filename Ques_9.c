// Date 03 - April - 2024
// Create a Menu Based Program for common operations on Linked List.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;
void addNodeFront(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        head = newNode;
    }
}
void addNodeEnd(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = tail->next;
    }
}
void display()
{
    struct node *current = head;
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        printf("List elements are : ");
        while (current != NULL)
        {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}
void deleteByVal(int data)
{
    struct node *current = head;
    if (head == NULL || head->next == NULL)
        return;
    while (current->next != NULL)
    {
        if (current->next->data == data)
        {
            current->next = current->next->next;
        }
        current = current->next;
    }
    return;
}
void deleteFromPos(int pos)
{
    struct node *current = head;
    for (int i = 2; i <= pos; ++i)
    {
        current = current->next;
    }
    current->next = current->next->next;
    return;
}
void deleteFromEnd()
{
    struct node *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }
    current->next = NULL;
    return;
}
int main()
{
    int choice = 0;
    do
    {
        printf("\n");
        printf("1. Append Node to End of List: \n");
        printf("2. Append Node to Head of List: \n");
        printf("3. Delete By Node Value : \n");
        printf("4. Delete Node from Back of List : \n");
        printf("5. Delete Node from Custom Position in List : \n");
        printf("6. Display List : \n");
        printf("7. Exit : \n");
        printf("Select Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter Node Value to append to End: ");
            int val;
            scanf("%d", &val);
            addNodeEnd(val);
            break;
        }
        case 2:
        {
            printf("Enter Node Value to append to Head: ");
            int val;
            scanf("%d", &val);
            addNodeFront(val);
            break;
        }
        case 3:
        {
            int val;
            printf("Enter Node Value to delete: ");
            scanf("%d", &val);
            deleteByVal(val);
            break;
        }
        case 4:
        {
            deleteFromEnd();
            break;
        }
        case 5:
        {
            int ind;
            printf("Enter Index : ");
            scanf("%d", &ind);
            deleteFromPos(ind);
            break;
        }
        case 6:
        {
            display();
            break;
        }
        default:
            break;
        }
        display();
    } while (choice > 0 && choice < 7);

    return 0;
}