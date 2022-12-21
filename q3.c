#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
    struct Node *next;
} Node;

Node *top = NULL;

Node *create(char x)
{
    Node *p;
    p = (Node *)malloc(sizeof(Node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    p->next = NULL;
    return p;
}

void push(Node *p)
{
    if (top == NULL)
    {
        top = p;
    }
    else
    {
        p->next = top;
        top = p;
    }
}

Node *pop()
{
    Node *p = top;
    top = top->next;
    return p;
}

typedef struct queue
{
    Node *data;
    struct queue *next;
} queue;

queue *front = NULL, *rear = NULL;

void enqueue(Node *d)
{
    queue *t = (queue *)malloc(sizeof(queue));
    t->data = d;
    t->next = NULL;
    if (front == NULL)
    {
        front = rear = t;
    }
    else
    {
        rear->next = t;
        rear = t;
    }
}

Node *dequeue()
{
    Node *t;
    t = front->data;
    front = front->next;
    return t;
}

int queueisEmpty()
{
    if (front == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int queue_size(queue *f)
{
    int count = 0;
    while (f != NULL)
    {
        count++;
        f = f->next;
    }
    return count;
}

void print(Node *p)
{
    printf("%c\n", p->data);
    enqueue(p);
    while (!queueisEmpty())
    {
        int nodes_in_level = queue_size(front);
        while (nodes_in_level > 0)
        {
            p = dequeue();
            if (p->left)
            {
                printf("%c  ", p->left->data);
                enqueue(p->left);
            }
            if (p->right)
            {
                printf("%c  ", p->right->data);
                enqueue(p->right);
            }
            nodes_in_level--;
        }
        printf("\n");
    }
}

int main()
{
    char s[10] = {'a', 'c', '+', 'd', '-', '#', 'e', '-', '*'};
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            Node *n, *l, *r;
            n = create(s[i]);
            r = pop();
            l = pop();
            n->left = l;
            n->right = r;
            push(n);
        }
        else
        {
            Node *n;
            n = create(s[i]);
            push(n);
        }
    }
    printf("The expression tree formed is printed as below:\n");
    print(top);
    return 0;
}