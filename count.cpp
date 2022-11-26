#include<iostream>
using namespace std;

int main(){
    int arr[100],brr[100],count[100];
    int n;
    cout<<"Enter n\n";
    cin>>n;
    for(int i=0;i<n;i++){
        brr[i]=0;
        count[i]=0;
    }
    cout<<"Enter elements of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i]++;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i]++;
    }
    return 0;
}