/*Implementation of Queue*/

#include <stdio.h>

// initailization of components

int Q[100], Rear = -1, Front = -1, x, n, choice;
void Insert();
void Delete();
void Display();

void main()
{
    printf("\t WELCOME to implementation of QUEUE using array !! \n");
    printf("Enter the size of Queue (Maximum size = 100): ");
    scanf("%d", &n);
    do
    {
        printf("\n Queue Operation available: \n");
        printf("\t1.Insert \t2.Delete \t3.Display \t4.Exit \n");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            printf("Exit: Program Finished !! ");
            break;

        default:
            printf("Please enter a valid choice 1, 2, 3, 4 \n");
            break;
        }
    } while (choice != 4);
}

// function for Insert
void Insert()
{
    if (Rear > n - 1)
    {
        printf("Queue is overflow");
    }
    else
    {
        printf("enter the data to be inserted ");
        scanf("%d", &x);
        Rear++;
        Q[Rear] = x;
        if (Front == -1)
        {
            Front = 0;
        }
    }
}

// function for Delete
void Delete()
{
    if (Front == -1)
    {
        printf("Queue is underflow");
    }
    else
    {
        if (Front == Rear)
        {
            Front = Rear = -1;
        }
        else
        {
            Front++;
        }
    }
}

// function for Display
void Display()
{
    if (Rear < 0)
    {
        printf(" Queue is empty ! \n");
    }
    else
    {
        printf(" The elements in the Queue are: \n");
        for (int i = Front; i < n; i++)
        {
            printf(" %d ", Q[i]);
        }
        printf("\n");
    }
}