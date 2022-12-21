#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *pre;
};

void createList(){
    struct node *head=NULL;
    struct node *temp;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode -> pre = NULL;
    if(head==NULL){
        head =temp = newnode;
    }
    else{
        head->next=newnode;
        newnode->pre=temp;
        temp=newnode;
        
    }

}

int main(){




    return 0;
}