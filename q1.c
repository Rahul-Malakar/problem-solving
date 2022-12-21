#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    char name[20];
    struct Node *prev;
    struct Node *next;
};
int isPrime(int n)
{
    if ((n & 1) == 0)
    {
        if (n == 2)
            return 1;
        return 0;
    }
    else
    {
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

void addChild(struct Node *head, char childName[20])
{
    struct Node *currNode = head;
    struct Node *newNode = malloc(sizeof(struct Node));
    for (int i = 0; i < 20; i++)
    {
        newNode->name[i] = childName[i];
    }
    while (currNode->next != head)
    {
        currNode = currNode->next;
    }
    currNode->next = newNode;
    newNode->prev = currNode;
    newNode->next = head;
    head->prev = newNode;
}
void display(struct Node *head)
{
    struct Node *currNode = head->next;

    while (currNode != head)
    {
        printf("%s ", currNode->name);
        currNode = currNode->next;
    }
}

int del(struct Node *head, int size, int prevIndex, int secondListSize)
{
    struct Node *currNode = head->next;
    struct Node *prevNode = head;

    int i;
    for (i = 0; i < prevIndex + size; i++)
    {
        prevNode = currNode;
        currNode = currNode->next;
        if (currNode == head)
        {
            currNode = currNode->next;
        }
    }
    if (currNode->next == head)
    {
        prevNode->next = head;
        head->prev = prevNode;
    }
    else if (prevNode->next == head)
    {
        i--;
        head->next = currNode->next;
        currNode->next->prev = head;
    } 
    else
    {
        prevNode->next = currNode->next;
        currNode->next->prev = prevNode;
    }
    free(currNode);
    return (i - 1) % secondListSize;
}

int main()
{
    struct Node *firstList = malloc(sizeof(struct Node));
    firstList->next = firstList;
    firstList->prev = firstList;
    struct Node *secondList = malloc(sizeof(struct Node));
    secondList->next = secondList;
    secondList->prev = secondList;
    FILE *filePtr = fopen("childrens.txt", "r");
    int line = 1, childrenInList1 = 0, childrenInList2 = 0;
    char childName[20];

    while (!feof(filePtr))
    {
        fscanf(filePtr, "%s", childName);
        if (isPrime(line++))
        {
            childrenInList1++;
            addChild(firstList, childName);
        }
        else
        {
            childrenInList2++;
            addChild(secondList, childName);
        }
    }
    fclose(filePtr);

    printf("First List: ");
    display(firstList);
    printf("\nSecond List: ");
    display(secondList);
    printf("\n");

    int count = 0, index = 0, isStart = 1;
    while (count != childrenInList1 && childrenInList2 != 0)
    {
        index = del(secondList, isStart == 1 ? childrenInList2 / 2 : childrenInList1, index, childrenInList2--);
        count++;
        isStart = 0;
        printf("Second List: ");
        display(secondList);
        printf("\n\n");
    }
    if (childrenInList2)
    {
        printf("Second: ");
        display(secondList);
    }
    else
    {
        printf("Empty second list");
    }
    return 0;
}