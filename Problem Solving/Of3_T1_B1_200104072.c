#include <stdio.h>
void merge(int a[], int, int, int);
void merge_sort(int a[], int, int);

void main()
{
    int arr[100], i, n;
    printf(" Enter the number of elements in the array : ");
    scanf("%d", & n);
    printf("\n Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", & arr[i]);
    }
    merge_sort(arr, 0, n - 1);
    printf("\n The sorted array is: \n");
    for (i = 0; i < n; i++)
        printf(" %d\t", arr[i]);
    getch();
}


void merge(int arr[], int start, int mid, int end)
{
    int i = start, j = mid + 1, index = start, temp[100], k;
    while ((i <= mid) && (j <= end))
    {
        if (arr[i] < arr[j])
        {
            temp[index] = arr[i];
            i++;
        }
        else
        {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if (i > mid)
    {
        while (j <= end)
        {
            temp[index] = arr[j];
            j++;
            index++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
    for (k = start; k < index; k++)
        arr[k] = temp[k];
}


void merge_sort(int arr[], int start, int end)
{
    int mid;
    if (start < end)
    {
        mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
