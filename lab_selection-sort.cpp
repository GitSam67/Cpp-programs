#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int a[100],n,swap,k,min,x;
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter elements of array!!\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        min = a[i+1];
        cout<<"Pass "<<i+1<<":"<<" ";
        for(int j=i+1;j<n;j++){
            if(min>a[j]){
                min = a[j];
                x = j;
            }
        }
        swap = a[i];
        a[i] = a[x];
        a[x] = swap;

        for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}