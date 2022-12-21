#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    struct Node *next;
    char word[30];
    int count;
    struct Node *prev;
} Node;

Node *pointer_array[50] = {NULL};

void Insert(Node *p, char *x)
{
    Node *t;
    t = (Node *)malloc(sizeof(Node));
    strcpy(t->word, x);
    t->next = NULL;
    if (p == NULL)
    {
        p = t;
        p->count = 1;
        pointer_array[strlen(x)] = p;
    }
    else if (strcmp(t->word, p->word) <= 0)
    {
        if (strcmp(t->word, p->word) == 0)
        {
            p->count++;
            free(t);
            return;
        }
        else
        {
            t->count = 1;
        }
        t->next = pointer_array[strlen(x)];
        t->prev = NULL;
        pointer_array[strlen(x)] = t;
    }
    else
    {
        Node *p = pointer_array[strlen(x)];
        while (p->next != NULL && (strcmp(t->word, p->next->word)) >= 0)
        {
            p = p->next;
        }
        if (strcmp(t->word, p->word) == 0)
        {
            p->count++;
            free(t);
            return;
        }
        else
        {
            t->count = 1;
        }
        t->next = p->next;
        p->next = t;
        t->prev = p;
        if (t->next != NULL)
        {
            t->next->prev = t;
        }
    }
}

void Display(int i)
{
    if (pointer_array[i] == NULL)
    {
        printf("The paragraph doesn't contain a word of length %d!\n", i);
    }
    else
    {
        printf("Word of lenght %d are:\n", i);
        Node *p = pointer_array[i];
        while (p != NULL)
        {
            printf("%s %d\n", p->word, p->count);
            p = p->next;
        }
    }
    printf("\n");
}

int max(int max_lenght, int n)
{
    if (max_lenght > n)
    {
        return max_lenght;
    }
    else
    {
        return n;
    }
}

int main()
{
    int max_lenght = 0;
    char s[30];
    FILE *fp = fopen("data2.txt", "r");
    while (fscanf(fp, "%s", s) > 0)
    {
        max_lenght = max(max_lenght, strlen(s));
        Insert(pointer_array[strlen(s)], s);
    }
    for (int i = 1; i <= max_lenght; i++)
    {
        Display(i);
    }
    return 0;
}