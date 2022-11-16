#include<iostream> 
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void inserthead(node* &head, int dat){
    node *n = new node(dat);
    n->next = head;
    head = n;
}

void insertmid(node *head, int val){
    node* n =new node(val);

    node *pretemp =NULL;
    node *temp = head;
    while(temp->data<val){
        pretemp=temp;
        temp=temp->next;
    }
    pretemp->next = n;
    n->next=temp;
}

void inserttail(node* &head, int dat){
    node* n=new node(dat);

    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

void display(node* head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void deletion(node* head, int dat){

}

void deleteathead(node* head){

}

int main(){

    node* head = NULL;
    inserttail(head, 3);
    inserttail(head, 4);
    inserttail(head, 5);
    inserthead(head, 1);
    insertmid(head, 2);
    display(head);
    deletion(head,3);
    deleteathead(head);


    return 0;
}