#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int wt[], int val[], int n)
{

	// Base Case
	if (n == 0 || W == 0)
		return 0;

	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);

	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n - 1],
						wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}

int main()
{
    int count,val[100],wt[100],W;
    cout<<"Enter count of objects: ";
    cin>>count;
    cout<<"Enter value of objects respectively..\n";
	for(int i=0;i<count;i++){
	    cin>>val[i];
	}
	cout<<"Enter weight of objects respectively..\n";
	for(int i=0;i<count;i++){
	    cin>>wt[i];
	}
	cout<<"Enter knapsack capacity ..\n";
	cin>>W;
	cout << "Most Optimal Value is: "<<knapSack(W, wt, val, count);
	return 0;
}

