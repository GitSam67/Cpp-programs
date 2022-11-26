#include<iostream>
using namespace std;

class point{
     int x,y;
     public:
     point(int x1,int y1){    // Creating constructor    
         x=x1; y=y1;
     }
     void display(){       
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
     }
     point(point &p){     // Creating copy constructor
         x=p.x; y=p.y;
     }
    
};

int main(){
    point p1(6,7);
    point p2(p1);
    cout<<"Display of p1 constructor:\n";
    p1.display();
    cout<<"Display of p2 constructor copy of p1 constructor:\n";
    p2.display();
    return 0;
}