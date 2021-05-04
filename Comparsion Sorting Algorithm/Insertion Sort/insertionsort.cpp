#include<stdio.h>
#include<stdlib.h>

void insertionsort(int a[], int n)
{
    int i, j, key;
    for(i = 1; i <= n-1; i++) // No of Passes 
    {
        key = a[i]; // Element about to enter the sorted array
        j = i - 1;
        while(j >= 0 && a[j] > key) // Perform Shifting Operation
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key; // Updating the elements
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

    insertionsort(arr, length);

    for(int j = 0; j < length; j++)
    {
        printf("%d  ", arr[j]);
    }
    getchar();
    return 0;
}