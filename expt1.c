/* Implementation of stack using array*/

#include <stdio.h>

// initialization of functions

int STK[100], Top = -1, x, n, i, choice;
void Push();
void Pop();
void Peep();
void Display();

// main method

void main()
{
    printf("\t WELCOME to Implementation of STACK using array !! \n");
    printf("Enter the size of Stack (Maximum size = 100): ");
    scanf("%d", &n);
    do
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peep();
            break;
        case 4:
            Display();
            break;
        case 5:
            printf("Exit: Program Finished !! ");
            break;

        default:
            printf("Please enter a valid choide: 1, 2, 3, 4, 5 \n");
        }
    } while (choice != 5);
}

// functions for Push

void Push()
{
    if (Top > n - 1)
    {
        printf("Stack in overflow\n");
    }
    else
    {
        printf("Enter the data of the element \n");
        scanf("%d", &x);
        Top++;
        STK[Top] = x;
    }
}

// functions for Pop

void Pop()
{
    if (Top < 0)
    {
        printf(" Stack Underflow \n");
    }
    else
    {
        printf("The popped element is: %d\n", STK[Top]);
        Top--;
    }
}

// functions for Peep

void Peep()
{
    printf(" Enter the position of the element from the top which you want to peep: ");
    scanf("%d", &i);
    if (Top - i + 1 < 0)
    {
        printf(" Stack Underflow on Peep \n");
    }
    else
    {
        printf(" The %d element from the top is: %d \n", i, STK[Top - i + 1]);
    }
}

// functions for Display

void Display()
{
    if (Top < 0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The elements in the stack are");
        for (int i = Top; i > -1; i--)
        {
            printf("\n %d \n", STK[i]);
        }
    }
}
