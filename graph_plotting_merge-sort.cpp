#include <iostream>
#include "pbPlots.hpp"
#include "supportLib.hpp"
#include <chrono>
#include <fstream>
#include <vector>
using namespace std;
using namespace std::chrono;

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

    RGBABitmapImageReference *imageRef = CreateRGBABitmapImageReference();
    vector<double> x;
    vector<double> y;
    int t;
    cout << "Enter the number of test cases" << endl;
    cin >> t;
    while (t--)
    {
        int n, swap, k;
        cout << "Enter n \n";
        cin >> n;
        size = n;
        int a[n];
        x.push_back(n);
        for (int i = 0; i < n; i++)
        {
            // cin>>a[i];
            int random = 1 + (rand() % 1000);
            a[i] = random;
        }

        auto start = high_resolution_clock::now();

        mergesort(a, 0, size - 1);
        cout << "\nSeries after sorting:\n";
        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        cout << "\nTime taken by function: "
             << duration.count() << " microseconds" << endl;
        y.push_back(duration.count());
        cout << endl;
    }
    DrawScatterPlot(imageRef, 600, 400, &x, &y, NULL);
    vector<double> *pngData = ConvertToPNG(imageRef->image);
    WriteToFile(pngData, "wplot.png");
    DeleteImage(imageRef->image);
    return 0;
}