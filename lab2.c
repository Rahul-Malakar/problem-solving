#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *garage = NULL;
struct node *onroad = NULL;

void enterGarage(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = garage;
    garage = newNode;
}

void exitTruck(int m)
{
    struct node *temp;

    if (garage == NULL)
        printf("No truck is in the Garage\n");
    else if (garage->data != m)
    {
        printf("Truck %d is not near the garage door", m);
    }
    else
    {
        printf("exited truck= %d\n", garage->data);
        temp = garage;
        garage = garage->next;
    }
}
void enterRoad(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = onroad;
    onroad = newNode;
}
void exitroad(int m)
{
    struct node *temp;

    if (onroad == NULL)
        printf("No truck is in the Road\n");
    else if (onroad->data != m)
    {
        printf("Truck %d is not near the garage door", m);
    }
    else
    {
        printf("Entered truck= %d\n", onroad->data);
        temp = onroad;
        onroad = onroad->next;
    }
}
int onRoad(int x)
{

    struct node *temp = onroad;

    while (temp != NULL)
    {
        if (temp->data == x)
            return 1;
        temp = temp->next;
    }
    return 0;
}
void showTruck(int x)
{
    if (garage == NULL)
    {
        printf("No truck is in the Garage\n");
        return;
    }
    printf("Trucks in Garage are ");
    struct node *temp = garage;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void showTruckonroad(int x)
{
    if (onroad == NULL)
    {
        printf("No truck is on road");
        return;
    }
    printf("Trucks on road are ");
    struct node *temp = onroad;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n;
    printf("How many cars are in the road\n");
    scanf("%d", &n);

    printf("Enter the Trucks present in Road\n");
    int mxx = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        enterRoad(x);
    }

    int c = 1;
    while (c)
    {
        printf("\n\nselect\n");
        printf("1 for onRoad\n2 for enterGarage\n3 for exitGarage\n4 for showTrucks\n");
        printf("5 to exit\n");

        int op, tNo, tNo2;
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter the Truck You want to check: \n");
            int check;
            scanf("%d", &check);
            int flag = onRoad(check);
            if (flag == 1)
            {
                printf("\nIt is on Road\n");
            }
            else
            {
                printf("\nIt is not on Road\n");
            }
            break;
        case 2:
            scanf("%d", &tNo);
            enterGarage(tNo);
            exitroad(tNo);
            break;
        case 3:
            scanf("%d", &tNo2);
            exitTruck(tNo2);
            break;
        case 4:
            printf("1 for garage\t\t2 for road\n");
            check;
            scanf("%d", &check);

            if (check == 1)
            {
                showTruck(check);
                break;
            }
            else
            {
                showTruckonroad(check);
                break;
            }
        case 5:
            c = 0;
            return 0;
        default:
            printf("Invalid input");
            break;
        }
    }
}