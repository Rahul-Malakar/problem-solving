#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node
{
    struct Node *left, *right;
    int data;
} Node;

Node *insert(Node *root, int data)
{

    if (!root)
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if (data > root->data)
        root->right = insert(root->right, data);
    else if (data < root->data)
        root->left = insert(root->left, data);
    return root;
}
void merge(Node *root1, Node *root2)
{
    if (!root2)
        return;
    Node *left = root2->left, *right = root2->right;
    root2->left = root2->right = NULL;
    merge(root1, left);
    root1 = insert(root1, root2->data);
    merge(root1, right);
}

int *generateRandomNumbers(int seed)
{
    srand(seed);
    int size = rand() % 16 + 1;
    int *arr = (int *)malloc(sizeof(int) * (size + 1));
    arr[0] = size;
    for (int i = 1; i <= size; i++)
    {
        arr[i] = rand() % 99 + 1;
    }
    return arr;
}

Node *genTree(int *vals)
{
    int n = vals[0];
    Node *head = (Node *)malloc(sizeof(Node));
    head->data = vals[1];
    head->left = head->right = NULL;
    for (int i = 2; i <= n; i++)
    {
        insert(head, vals[i]);
    }
    return head;
}

void inorder(Node *root)
{
    if (!root)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main()
{
    Node *tree1 = genTree(generateRandomNumbers(time(0) - 1));
    printf("Tree1 Values: ");
    inorder(tree1);
    printf("\n\n");
    Node *tree2 = genTree(generateRandomNumbers(time(0) + 1));
    printf("Tree2 Values: ");
    inorder(tree2);
    printf("\n\n");
    merge(tree1, tree2);
    printf("After Merging Values: ");
    inorder(tree1);
}