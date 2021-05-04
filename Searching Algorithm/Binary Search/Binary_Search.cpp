#include<stdio.h>
#include<stdlib.h>

void binary_search(int a[], int length, int x)
{
    int top = 0, bottom = length - 1, mid;
    int flag = 0;
    
    while(top <= bottom)
    {
        flag = 0; // Element not found
        mid = top + (bottom - top)/2;
        if(a[mid] == x)
        {
            printf("Element Found at index: %d", mid);
            flag = 1;
            break;
        }
        else if(a[mid] > x)
        {
            bottom = mid - 1;
        }
        else
        {
            top = mid + 1;
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

    printf("Enter the element to be searched in the array: ");
    scanf("%d", &x);
    
    binary_search(arr, length, x);

    getchar();
    return 0;    
}