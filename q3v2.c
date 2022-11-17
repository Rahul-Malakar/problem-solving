#include <stdio.h>

#include <stdlib.h>

struct Node
{
    int roll;
    char name[20];
    struct Node *next;
} * head;

void create()
{
    head = malloc(sizeof(struct Node));
    head->next = head;
}
void ins()
{
    struct Node *newNode = malloc(sizeof(struct Node));
    printf("Enter name: ");
    scanf("%s", newNode->name);
    printf("Enter roll: ");
    scanf("%d", &newNode->roll);
    if (head->next == head)
    {
        head->next = newNode;
        newNode->next = head;
    }
    else
    {
        struct Node *currNode = head->next, *prevNode = head;
        while (currNode != head && currNode->roll < newNode->roll)
        {
            prevNode = currNode;
            currNode = currNode->next;
        }
        prevNode->next = newNode;
        newNode->next = currNode;
    }
}
void del()
{
    int roll;

    printf("Enter roll: ");
    scanf("%d", &roll);

    struct Node *currNode = head->next, *prevNode = head;
    while (currNode != head && currNode->roll != roll)
    {
        prevNode = currNode;
        currNode = currNode->next;
    }
    if (currNode == head)
    {
        printf("Record not found");
        return;
    }
    else
    {
        printf("Roll %d deleted", currNode->roll);
        prevNode->next = currNode->next;
        free(currNode);
    }
}
void dFirst()
{
    if (head->next != head)
    {
        struct Node *temp = head->next;
        head->next = head->next->next;
        printf("Roll %d deleted", temp->roll);
        free(temp);
        return;
    }
    printf("No records");
}
void dLast()
{
    if (head->next != head)
    {
        struct Node *currNode = head->next, *prevNode = head;
        while (currNode->next != head)
        {
            prevNode = currNode;
            currNode = currNode->next;
        }
        prevNode->next = head;
        printf("Roll %d deleted", currNode->roll);
        free(currNode);
        return;
    }
    printf("No records");
}
void iFirst()
{
    struct Node *newNode = malloc(sizeof(struct Node));

    printf("Enter name: ");
    scanf("%s", newNode->name);
    printf("Enter roll: ");
    scanf("%d", &newNode->roll);

    if (head->next == head)
    {
        head->next = newNode;
        newNode->next = head;
    }
    else if (head->next->roll > newNode->roll)
    {
        newNode->next = head->next;
        head->next = newNode;
    }
    else
    {
        printf("Cannot be the first record");
    }
    return;
}
void iLast()
{
    struct Node *newNode = malloc(sizeof(struct Node)), *currNode = head->next;

    printf("Enter name: ");
    scanf("%s", newNode->name);
    printf("Enter roll: ");
    scanf("%d", &newNode->roll);

    if (head->next == head)
    {
        head->next = newNode;
        newNode->next = head;
        return;
    }
    while (currNode->next != head)
    {
        currNode = currNode->next;
    }
    if (currNode->roll < newNode->roll)
    {
        newNode->next = head;
        currNode->next = newNode;
    }
    else
    {
        printf("Cannot be the last record");
    }
    return;
}

void print()
{
    if (head->next == head)
    {
        printf("No records");
        return;
    }
    struct Node *currNode = head->next;

    do
    {
        printf("Name: %s, Roll: %d\n", currNode->name, currNode->roll);
        currNode = currNode->next;
    } while (currNode != head);
}

int main()
{
    int c = 1;
    while (c)
    {
        printf("\n1.create\t\t2.del(key)\n3.dFirst\t\t4.dLast\n5.ins(data)\t\t6.iFirst(data)\n7.iLast(data)\t\t8.print\n0.exit\n");
        int op, key;
        printf("Enter your choice : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            create();
            printf("A new List has been created\n");
            break;
        case 2:
            del();
            break;
        case 3:
            dFirst();
            break;
        case 4:
            dLast();
            break;
        case 5:
            ins();
            break;
        case 6:
            iFirst();
            break;
        case 7:
            iLast();
            break;
        case 8:
            print();
            break;
        case 0:
            c = 0;
            break;
        default:
            printf("Invalid option\n");
            break;
        }
    }
}