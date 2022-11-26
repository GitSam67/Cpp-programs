#include<iostream>
using namespace std;

class MyClass{
    public:
    int enrollno;
    string sname;
    string city;
};

int main(){
    MyClass std[10];
    int n;
    cout<<"Enter number of students:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter enrollment number of student "<<i+1<<endl;
        cin>>std[i].enrollno;
        cout<<"Enter student name of student "<<i+1<<endl;
        cin>>std[i].sname;
        cout<<"Enter city of student "<<i+1<<endl;
        cin>>std[i].city;
    }
    for(int i=0;i<n;i++){
        cout<<"The enrollment number of student "<<i+1<<" is: "<<std[i].enrollno<<endl;
        
        cout<<"The student name of student "<<i+1<<" is: "<<std[i].sname<<endl;
     
        cout<<"The city of student "<<i+1<<" is: "<<std[i].city<<endl;
    
    }
    return 0;
}