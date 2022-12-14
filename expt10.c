#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int smallest(int arr[], int k, int n);
void selection_sort(int arr[], int n);

int main()
{
    int arr[10], n;
    printf("enter number of elements ");
    scanf("%d", &n);
    printf("enter the numbers in the array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}

int smallest(int arr[], int k, int n)
{
    int pos = k, small = arr[k];
    for (int i = k + 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            pos = i;
        }
    }
    return pos;
}

void selection_sort(int arr[], int n)
{
    int k, pos, temp;
    for (int k = 0; k < n; k++)
    {
        pos = smallest(arr, k, n);
        temp = arr[k];
        arr[k] = arr[pos];
        arr[pos] = temp;
    }
}
