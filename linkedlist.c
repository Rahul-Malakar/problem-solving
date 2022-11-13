#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void create(int a[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void InsertSort(struct Node *head, int x)
{

    struct Node *new, *q = head, *p = NULL;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = x;
    new->next = NULL;

    if (q->data > x)
    {
        new->next = q;
        head = new;
    }

    else
    {
        while (q->data < x)
        {
            p = q;
            q = q->next;
        }
        if (q->next == NULL)
        {
            p->next = new;
            new->next=q;
        }
        else
        {
            p->next = new;
            new->next = q;
        }
    }
}

int main()
{
    int a[] = {3, 8, 9, 15, 20};
    create(a, 5);
    // Display(first);
    // InsertSort(first, 2);
    // InsertSort(first, 11);
    InsertSort(first, 10);
    Display(first);

    return 0;
}