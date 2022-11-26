#include <iostream>
#include <stdlib.h>
using namespace std;

int size;

void merge(int arr[], int i, int mid, int j)
{
    int b[size], l = i, r = mid + 1, k = i;
    while (l <= mid && r <= j)
    {
        if (arr[l] < arr[r])
        {
            b[k] = arr[l];
            l++;
            k++;
        }
        else
        {
            b[k] = arr[r];
            r++;
            k++;
        }
    }
    if (l > mid)
    {
        while (r <= j)
        {
            b[k] = arr[r];
            r++;
            k++;
        }
    }
    else
    {
        while (l <= mid)
        {
            b[k] = arr[l];
            l++;
            k++;
        }
    }
    for (int x = i; x <= j; x++)
    {
        arr[x] = b[x];
    }
}

void mergesort(int arr[], int i, int j)
{
    int mid;
    if (i < j)
    {
        mid = (i + j) / 2;
        mergesort(arr, i, mid);
        mergesort(arr, mid + 1, j);
        merge(arr, i, mid, j);
    }
}

int main()
{
    int a[100];
    cout << "Enter size of array:" << endl;
    cin >> size;
    cout << "Enter values of array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "\nSeries before sorting:\n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    mergesort(a, 0, size - 1);
    cout << "\nSeries after sorting:\n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}