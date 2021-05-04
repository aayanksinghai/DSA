#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int a[], int n)
{
    for(int j = 0; j <= n-2; j++)   // no of passes
    {
        int min = a[j], pos = j;
        for(int i = j + 1; i <= n-1; i++)
        {
            if(a[i] < min)
            {
                min = a[i];
                pos = i;
            }
        }
        swap(&a[j], &a[pos]);
    }
}

int main()
{
    int length, arr[1000];
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &length);
    
    for(int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    selectionsort(arr,length);
    
    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    getchar();
    return 0;
}