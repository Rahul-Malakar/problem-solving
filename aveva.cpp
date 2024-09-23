#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


void printLL(Node* head){
    Node* temp = head;

    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}


int main(){

    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);

    cout<<"printing the list"<<endl;

    printLL(head);
    
    return 0;
}
