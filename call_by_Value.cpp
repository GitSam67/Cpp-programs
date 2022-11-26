#include<iostream>
using namespace std;
// Call by value
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"a = "<<x<<" and "<<"b = "<<y<<endl;
}

int main(){
    int a=7,b=6;
    cout<<"Before swapping:"<<endl;
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    cout<<"After swapping:"<<endl;
    swap(a,b);
    return 0;
}