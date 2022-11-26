#include<iostream>
using namespace std;

class date{
     int dd,mm,yy;
    public:
     date(int date,int month,int year){              // Creating Constructor
         dd=date;
         mm=month;
         yy=year;
         cout<<"The constructor is called.....\n";
     }
     void display(){
         cout<<"The entered date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
     }
     ~date(){                                        // Creating Destructor 
         cout<<"The destructor is called.....\n";
     }
};

int main(){
    int d,m,y;
    {
    cout<<"Enter the date:\n";
    cin>>d;
    cout<<"Enter the month:\n";
    cin>>m;
    cout<<"Enter the year:\n";
    cin>>y;
    date d1(d,m,y);
    d1.display();
    }
    {
    cout<<"Enter the date:\n";
    cin>>d;
    cout<<"Enter the month:\n";
    cin>>m;
    cout<<"Enter the year:\n";
    cin>>y;
    date d2(d,m,y);
    d2.display();
    }
    return 0;
}