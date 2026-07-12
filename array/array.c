#include <stdio.h>

int insertElement(int arr[], int n, int element, int position);
int deleteElement(int arr[], int n, int position);
int searchElement(int arr[], int n, int element);
int switchCase(int arr[], int n, int choice);

int main(void)
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
  
    printf("Enter Choice: \n1. Insert an element \n2. Delete an element \n3. Search for an element: \n");
    int choice;
    scanf("%d", &choice);

    n = switchCase(arr, n, choice);

    printf("Array after operation: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int switchCase(int arr[], int n, int choice)
{
    switch (choice)
    {
        case 1:
        {
            int element, position;
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            printf("Enter the position to insert the element: ");
            scanf("%d", &position);
            n = insertElement(arr, n, element, position);
            break;
        }
        case 2:
        {
            int position;
            printf("Enter the position to delete the element: ");
            scanf("%d", &position);
            n = deleteElement(arr, n, position);
            break;
        }
        case 3:
        {
            int element;
            printf("Enter the element to search for: ");
            scanf("%d", &element);
            int index = searchElement(arr, n, element);
            if (index != -1)
            {
                printf("Element found at index: %d\n", index);
            }
            else
            {
                printf("Element not found in the array.\n");
            }
            break;
        }
        default:
        {
            printf("Invalid choice!\n");
            break;
        }
    }
    return n;
}

int insertElement(int arr[], int n, int element, int position)
{
    if (position < 0 || position > n)
    {
        printf("Invalid position!\n");
        return n;
    }

    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    return n + 1;
}

int deleteElement(int arr[], int n, int position)
{
    if (position < 0 || position >= n)
    {
        printf("Invalid position!\n");
        return n;
    }

    for (int i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}

int searchElement(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}