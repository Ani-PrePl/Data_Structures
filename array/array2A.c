#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("OG array: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *ptr = arr + n - 1;
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *ptr);
        ptr--;
    }
return 0;
}




// USING LOOP:
// int reverseArray(int arr[], int n);

// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("OG array: \n");
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     printf("reversed array: \n");
//     reverseArray(arr, n);
//     printf("\n");
//     return 0;
// }

// int reverseArray(int arr[], int n)
// {
//     for(int i = n - 1 ; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
// }