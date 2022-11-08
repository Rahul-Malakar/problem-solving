// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertattail(node *&p, int val)
{
    node *n = new node(val);

    if (p == NULL)
    {
        p = n;
        return;
    }

    node *temp = p;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertathead(node *&head, int val){
    node *n = new node(val);
    n->next=head;
    n=head;
    
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertathead(head, 4);
    
    display(head);
    return 0;
}