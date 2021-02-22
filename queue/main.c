#include <stdio.h>

#define MAX 50

void insert();
void deletes();
void display();
struct queue{ int f,r,q1[MAX]};
struct queue q;

main()
{
    int choice;q.r=-1;
q.f=-1;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            goto label;
            default:
            printf("Wrong choice \n");
        }}label:
            return(0);}

void insert()
{
    int add;
    if (q.r == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if(q.f==-1)
            q.f++;

        printf("Inset the element in queue : ");
        scanf("%d", &add);
        q.r = q.r + 1;
    q.q1[q.r] = add;
    }
}

void delete()
{
    if (q.f == - 1 || q.f > q.r)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {

        printf("Element deleted from queue is : %d\n", q.q1[q.f]);
        q.f = q.f + 1;
    }
}

void display()
{
    int i;
    if (q.f == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = q.f; i <= q.r; i++)
            printf("%d ", q.q1[i]);
        printf("\n");
    }
}
