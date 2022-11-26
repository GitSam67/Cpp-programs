#include<iostream>
using namespace std;

void fibonacci(int n){
    int a=-1,b=1,c;
    for(int i=0;i<n;i++){
        c = a + b;
        cout << c <<" ";
        a = b;
        b = c;
    }
}
int main(){
    int n;
    cout << "Enter nth term of fibonacci sequence: " << endl;
    cin>>n;
    cout << "Fibonacci series upto "<< n <<" term is :"<<endl; 
    fibonacci(n);
    return 0;
}