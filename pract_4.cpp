#include<iostream>
using namespace std;

float default_arg(int a=6,float b=7.6){
    return a+b;
}

int main(){
    cout<<"No arguments passed: ";
    cout<<default_arg()<<endl;
    cout<<"First arguments passed: ";
    cout<<default_arg(5)<<endl;
    cout<<"Second arguments passed: ";
    cout<<default_arg(7.9)<<endl;
    cout<<"All arguments passed: ";
    cout<<default_arg(4,9.8)<<endl;
    return 0;
}