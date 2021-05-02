#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int left, int right)
{
    int i = left - 1;
    int pivot = a[right];
    int j = left;

    while(j < right)
    {
        if(a[j] <= pivot)
        {
            i++;
            swap(&a[j], &a[i]);
        }
            j++;
    }
        i++;
        swap(&a[i], &a[right]);
        return i; // Returning the Pivot Element Position
}

void quicksort(int a[], int left, int right)
{
    if(left < right)
    {
        int y = partition(a, left, right);
        quicksort(a, left, y - 1);
        quicksort(a, y + 1, right);
    }
}

int main()
{
    int arr[] = {4,8,2,6,1,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, size-1);

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    getchar();
    return 0;
}