#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubsort(int arr[], int n)
{
    for(int i = 0; i <= n-2; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


int main()
{
    int arr[] = {4,2,7,9,1};
    int length = sizeof(arr)/sizeof(arr[0]);
    bubsort(arr, length);

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    getchar();
    return 0;
}