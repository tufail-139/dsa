#include <stdio.h>

// Linear search function
int linear_search(int arr[], int n, int index)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == index)
            return i; // Return index if found
    }
    return -1; // Not found
}

// Function to find max and min in array
void find_max_min(int arr[], int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int arr[100], i, n, key, index, max, min;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Linear search
    printf("Enter the element to search: ");
    scanf("%d", &key);
    index = linear_search(arr, n, key);
    if (index != -1)
        printf("Element %d found at index %d\n", key, index);
    else
        printf("Element %d not found in the array\n", key);

    // Find max and min
    find_max_min(arr, n, &max, &min);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}