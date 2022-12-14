#include <stdio.h>
#define MAX 10
int deque[MAX];
int left = -1, right = -1;

void input_deque(void);
void output_deque(void);

void insert_left(void);
void delete_left(void);
void insert_right(void);
void delete_right(void);

void display(void);

int main()
{
    int option;
    do
    {

        printf("\n *****MAIN MENU*****");
        printf("\n 1.Input restricted deque");
        printf("\n 2.Output restricted deque");
        printf("\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            input_deque();
            break;
        case 2:
            output_deque();
            break;

        default:
            printf("Enter a valid option\n  1.Input restricted deque \n 2.Output restricted deque");
            break;
        }

    } while (option != 2);

    return 0;
}

void input_deque()
{
    int option;
    do
    {
        printf("\n INPUT RESTRICTED DEQUE");
        printf("\n 1.Insert at right");
        printf("\n 2.Delete from left");
        printf("\n 3.Delete from right");
        printf("\n 4.Display");
        printf("\n 5.Quit");
        printf("\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            insert_right();
            break;
        case 2:
            delete_left();
            break;
        case 3:
            delete_right();
            break;
        case 4:
            display();
            break;
        default:
            printf("Enter a valid option\n ");
            break;
        }
    } while (option != 5);
}

void output_deque()
{
    int option;
    do
    {
        printf("OUTPUT RESTRICTED DEQUE");
        printf("\n 1.Insert at right");
        printf("\n 2.Insert at left");
        printf("\n 3.Delete from left");
        printf("\n 4.Display");
        printf("\n 5.Quit");
        printf("\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            insert_right();
            break;
        case 2:
            insert_left();
            break;
        case 3:
            delete_left();
            break;
        case 4:
            display();
            break;
        default:
            printf("Enter a valid option\n ");
            break;
        }
    } while (option != 5);
}

void insert_right()
{

    int val;
    printf("\n Enter the value to be added:");
    scanf("%d", &val);

    if ((left == 0 && right == MAX - 1) || left == right + 1)
    {
        printf("\n Overflow");
    }
    else if (left == -1)
    {
        left = 0;
        right = 0;
    }
    else
    {
        if (right == MAX - 1)
            right = 0;
        else
            right++;
    }

    deque[right] = val;
}

void insert_left()
{

    int val;
    printf("\n Enter the value to be added:");
    scanf("%d", &val);

    if ((left == 0 && right == MAX - 1) || left == right + 1)
    {
        printf("\n Overflow");
    }
    else if (left == -1)
    {
        left = 0;
        right = 0;
    }
    else
    {
        if (left == 0)
            left = MAX - 1;
        else
            left--;
    }

    deque[left] = val;
}

void delete_right()
{
    if (left == -1)
    {
        printf("\n underflow");
    }
    printf("the element deleted is : %d", deque[right]);
    if (left == right)
    {
        left = -1;
        right = -1;
    }
    else if (right == 0)
    {
        right = MAX - 1;
    }
    else
    {
        right--;
    }
}

void delete_left()
{
    if (left == -1)
    {
        printf("\n underflow");
    }
    printf("the element deleted is : %d", deque[left]);
    if (left == right)
    {
        left = -1;
        right = -1;
    }
    else if (left = MAX - 1)
    {
        left = 0;
    }
    else
    {
        left++;
    }
}

void display()
{
    int front = left, rear = right;
    if (front == -1)
    {
        printf("\n Queue is empty");
    }
    printf("the elements in the queue are\n");

    if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            printf(" %d ", deque[i]);
        }
    }
    else
    {
        for (int i = front; i <= MAX - 1; i++)
        {
            printf(" %d ", deque[i]);
        }

        front = 0;

        for (int i = front; i <= rear; i++)
        {
            printf(" %d ", deque[i]);
        }
    }
    printf("\n");
}