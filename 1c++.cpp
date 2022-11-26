#include<iostream>
using namespace std;
// Call by reference
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout << "a = "<<*x<<" and b = "<<*y<<endl;
    *x=2,*y=9;
    
}

int main(){
    int a=7,b=6;
    cout << "Before swapping: "<<endl;
    cout<<"a = "<<a<<" and  b= "<<b<<"\n";
    cout<<"After swapping"<<"\n";
    swap(&a,&b);
    cout<<"Value modified by changing by reference:"<<endl;
    cout << "a = "<<a<<" and b = "<< b <<endl;
    return 0;
}