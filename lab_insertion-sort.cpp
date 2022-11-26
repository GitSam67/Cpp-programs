#include<iostream>
using namespace std;

int main(){
    int arr[100],n,key,j;
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter elements of array!!\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    cout<<"Array after applying insertion sort is:\n";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
        }
    return 0;
}