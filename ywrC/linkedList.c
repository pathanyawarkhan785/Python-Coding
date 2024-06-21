#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printLinkedList(struct node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
}

struct node *insertBegin(struct node *head, int data)
{
    struct node *insBeg = (struct node *)malloc(sizeof(struct node));
    // printf("enter data: ");
    // scanf("%d", &insBeg->data);
    insBeg->data = data;
    insBeg->next = head;
    return insBeg;
}

struct node *insertBetween(struct node *head)
{
    int oldElem;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    printf("After which element you want to insert: ");
    scanf("%d", &oldElem);

    struct node *current = head;

    printf("Enter data you want to insert: ");
    scanf("%d", &newNode->data);

    while (current != NULL && current->data != oldElem)
    {
        current = current->next;
    }

    if (current == NULL)
    {
        printf("Element not found in the list\n");
        free(newNode);
        return head;
    }

    newNode->next = current->next;
    current->next = newNode;

    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    // head = insertBegin(head, 12);
    // printLinkedList(head);

    head = insertBetween(head);
    printLinkedList(head);

    return 0;
}
