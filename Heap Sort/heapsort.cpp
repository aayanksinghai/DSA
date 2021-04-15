#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(int a[], int i, int length)
{
    int left = 2*i + 1;
    int right = 2*i + 2;

    int larger = i; // Assuming that the largest element value is at parent index

    if(left <= length && a[i] < a[left])
    {
        larger = left;
    }
    if(right <= length && a[larger] < a[right])
    {
        larger = right;
    }
    if(larger != i) 
    {
        swap(&a[i], &a[larger]);
        max_heapify(a, larger, length);
    }
}

void build_heap(int a[], int length)
{
    int indx = (length-1)/2;
    for(indx; indx >=0; --indx)
    {
        max_heapify(a, indx, length);
    }
}

void deletion(int a[], int length)
{
    while(length > 0)
    {
        swap(&a[0], &a[length]);
        length--;
        max_heapify(a, 0, length);
    }
}

int main()
{
    int arr[] = {5,3,8,12,1,8};
    int length = sizeof(arr)/sizeof(arr[0]);

    build_heap(arr, length-1);  // length - 1 is equal to largest index of array
    
    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    deletion(arr, length-1);

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    getchar();
    return 0;
}