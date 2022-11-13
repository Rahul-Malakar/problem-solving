#include <stdio.h>
#include <stdlib.h>



typedef struct node{
    int number;
    struct node *link;
}truck;


struct node *end(struct node *head){
    struct node *p = head;
    while (p != NULL)
    {
        p = p->link;
        free(head);
        head = p;
    }
    head = NULL;
    return head;
}


void onRoad(truck *head,int x){
    truck *p=head;
    if (head==NULL){
        printf("YES\n");
        return;
    }
    else{
        while (p!=NULL){
            if(p->number==x){
                printf("NO\n");
                return;
            }
            else{
                p=p->link;
            }
        }
        printf("YES\n");
        return;
    }
}


struct node *enterGarage(truck *head,int x){
    if (head==NULL){
        head=malloc(sizeof(truck));
        head->number=x;
        head->link=NULL;
    }
    else{
        truck *p=head;
        while (p->link!=NULL){
            p=p->link;
        }
        truck *p2=malloc(sizeof(truck));
        p2->number=x;
        p2->link=NULL;
        p->link=p2;
    }
    return head;
}


struct node *exitGarage(truck *head,int x){
    truck *ptr=head;
    truck *ptr2=head;
    if (head==NULL){
        printf("The garage is already empty\n");
    }
    else if (head->link==NULL){
        if (head->number==x){
            free(head);
            head=NULL;
            return head;
        }
        else{
            printf("Truck number %d is not in the garage\n",x);
            return head;
        }
    }
    else if(head->number==x){
        truck *ptr1=head;
        ptr1=ptr1->link;
        free(head);
        head=ptr1;
    }
    else{
        printf("Truck number %d is not near the gate\n",x);
    }
    return head;
}


void showTrucks(truck *head){
    if (head==NULL){
        printf("The garage is empty\nAll trucks are in road\n");
        return;
    }
    truck *ptr=head;
    printf("These trucks are in garage\n");
    while (ptr!=NULL){
        printf("%d\n",ptr->number);
        ptr=ptr->link;
    }
    printf("Rest all trucks are in road\n");
}
int main(){
    truck *head=malloc(sizeof(truck));
    head=NULL;
    printf("Enter no. of quiries\n");
    int q;scanf("%d",&q);
    while (q--){
        printf("Choose\n1.onRoad\n2.enterGarage\n3.exitGarage\n4.showTrucks\n");
        int x;scanf("%d",&x);
        if (x==1){
            printf("Enter the truck number\n");
            int x;scanf("%d",&x);
            onRoad(head,x);
        }
        else if (x==2){
            printf("Enter the truck number\n");
            int x;scanf("%d",&x);
            head=enterGarage(head,x);
        }
        else if (x==3){
            printf("Enter the truck number\n");
            int x;scanf("%d",&x);
            head=exitGarage(head,x);
        }
        else if (x==4){
            showTrucks(head);
        }
    }
    head=end(head);
    return 0;
}