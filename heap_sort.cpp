#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void heapify(int arr[], int n, int i)
{
	

	int largest = i;
	

	int l = 2 * i + 1;
	

	int r = 2 * i + 2;

	
	if (l < n && arr[l] > arr[largest])
		largest = l;

	
	if (r < n && arr[r] > arr[largest])
		largest = r;

	
	if (largest != i) {
		swap(arr[i], arr[largest]);

		
		heapify(arr, n, largest);
	}
}


void heapSort(int arr[], int n)
{
	

	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i > 0; i--) {
		
		swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	int n;
	int arr[n];
	srand(time(0));
    cout<<"Enter total number of elements to be sorted..";
    cin>>n;
	cout<<"Original Array..\n";
    for(int i=0;i<n;i++){
		arr[i] = 1 + (rand() % 100);
        cout<<arr[i]<<" "; 
    }
	cout<<"\n";
	heapSort(arr, n);

	cout << "Sorted array is.. \n";
	printArray(arr, n);
}