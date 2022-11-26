#include<iostream>
using namespace std;

int main(){
    int a[100],n,swap,k;
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter elements of array!!\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }

    cout<<"Array after applying bubble sort is:\n";
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
        }
    return 0;
}