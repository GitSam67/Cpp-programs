#include<iostream>
using namespace std;

class box{
    float l,b,h;
    public :
    void getdim();
    void display();
    void area();
};

void box :: getdim(){
        cout<<"Enter length of box:\n";
        cin>>l;
        cout<<"Enter width of box:\n";
        cin>>b;
        cout<<"Enter height of box:\n";
        cin>>h;
    }
void box :: display(){
        cout<<"The length of box is : "<<l<<endl;
        cout<<"The width of box is : "<<b<<endl;
        cout<<"The height of box is : "<<h<<endl;
    }
void box :: area(){
    cout<<"The area of box is: "<<l*b*h<<endl;
}

int main(){
    box bx1,bx2;
    cout<<"............Enter dimension for box 1............\n";
    bx1.getdim();
    cout<<"............Enter dimension for box 2............\n";
    bx2.getdim();
    cout<<"............The dimension for box 1..............\n";
    bx1.display();
    cout<<"............The dimension for box 2..............\n";
    bx2.display();
    cout<<"............The Area of box 1..............\n";
    bx1.area();
    cout<<"............The Area of box 2..............\n";
    bx2.area();
    return 0;
}