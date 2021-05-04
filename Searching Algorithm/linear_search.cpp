#include<stdio.h>
#include<stdlib.h>

void linear_search(int a[], int len, int x)
{
    int flag = 0; //flag = 0 means element not found in array
    for(int i = 0; i < len; i++)
    {
        if(a[i] == x)
        {
            flag = 1;
            printf("Element found at index: %d", i);
            break;
        }
    }
    if(flag == 0)
    {
        printf("Element Not Found");
    }
}

int main()
{
    int arr[1000], length, x;
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to be search in the array: ");
    scanf("%d", &x);

    linear_search(arr, length, x);
    getchar();
    return 0;
}