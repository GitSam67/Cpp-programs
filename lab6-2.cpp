#include<iostream>
using namespace std;

class box{
    float l,b,h;
    public :
    void getdim(){
        cout<<"Enter length of box:\n";
        cin>>l;
        cout<<"Enter width of box:\n";
        cin>>b;
        cout<<"Enter height of box:\n";
        cin>>h;
    }
    void display(){
        cout<<"The length of box is : "<<l<<endl;
        cout<<"The width of box is : "<<b<<endl;
        cout<<"The height of box is : "<<h<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter the number of objects:\n";
    cin>>n;
    box bx[n];
    for(int i=0;i<n;i++){
        cout<<"............Enter dimension for box "<<i+1<<"............\n";
        bx[i].getdim();
    }
    for(int i=0;i<n;i++){
        cout<<"............The dimension for box "<<i+1<<"..............\n";
        bx[i].display();
    }
    return 0;
}