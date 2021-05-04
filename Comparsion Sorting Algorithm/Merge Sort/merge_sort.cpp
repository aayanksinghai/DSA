#include<stdio.h>
#include<stdlib.h>

void Merge(int a[], int left, int mid, int right)
{
    int b[right - left + 1];
    int i = left;
    int j = mid + 1;
    int k = left;

    while(i <= mid && j <= right) // Comparing elements btw 2 sublist and inserting into temp array b
    {
        if(a[i] <= a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    // 1st Sublist element are already copied to array b, therefore 2nd sublist (rest) element will be copied
        if(i > mid)
        {
            while(j <= right)
            {
                b[k] = a[j];
                k++;
                j++;
            }
        }
        else
        {
            while(i <= mid)
            {
                b[k] = a[i];
                k++;
                i++;
            }
        }
    // All elements are now copied into temp array b. Now shifting it to array 'a'
        for(i = left; i <= right; i++)
        {
            a[i] = b[i];
        }
}

void MergeSort(int a[], int left, int right)
{
    if(left < right)
    {
        int mid = (left + right)/2;
        MergeSort(a, left, mid);
        MergeSort(a, mid+1, right); 
        Merge(a, left, mid, right);
    }
}

int main()
{
    int len, arr[1000];
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &len);
    
    for(int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    MergeSort(arr, 0, len-1);

    for(int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    getchar();
    return 0;
}