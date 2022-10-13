#include <stdio.h>
#include <stdlib.h>

// node creation...............
struct Node
{
    int data;
    struct Node *next;
};

// print value of linked list..........
void llt(struct Node *ptr) // p=head
{
    while (ptr != NULL) // last adress is become null
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtBegin(struct node *head)
{

    struct Node *ptr;
    int data;
    printf("Enter an First Element:\n");
    scanf("%d", &data);
    ptr = (struct Node *)malloc(sizeof(struct Node *)); // ptr memory allocation
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// inset at random position
struct Node *insertAtIndex(struct node *head)
{
    int loc, i = 0, data;
    printf("Enter an location:\n");
    scanf("%d", &loc);
    printf("Enter an Element:\n");
    scanf("%d", &data);
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *p = head; // cpoy of head

    while (i != loc - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
}

// Insert a node at last

struct Node *insertAtEnd(struct Node *head)
{
    struct Node *ptr, *p;
    ptr = (struct Node *)malloc(sizeof(struct Node *));
    int data;
    printf("Enter an Element for inserting at last:\n");
    scanf("%d", &data);
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next = NULL;
}

// Create Main Function..........
int main()
{
    struct Node *head;   // decleartion
    struct Node *second; // decleartion
    struct Node *third;  // decleartion

    // Memory Allocate........
    head = (struct Node *)malloc(sizeof(struct Node *));
    second = (struct Node *)malloc(sizeof(struct Node *));
    third = (struct Node *)malloc(sizeof(struct Node *));

    // link head data....
    head->data = 7;
    head->next = second;

    // link second data..
    second->data = 8;
    second->next = third;

    // link third data..
    third->data = 9;
    third->next = NULL;
    llt(head);
    head = insertAtBegin(head);
    llt(head);
    insertAtIndex(head);
    llt(head);
    insertAtEnd(head);
    llt(head);
    return 0;
}