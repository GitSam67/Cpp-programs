#include<iostream>
using namespace std;

struct student{
    string name;
    string address;
    long long int contact_no;
};

int main(){
    struct student s;
    cout << "Enter student name:\n";
    cin >> s.name;
    cout << "Enter student address:\n";
    cin >> s.address;
    cout << "Enter student contact no.:\n";
    cin >> s.contact_no;
    cout << "The student name is: ";
    cout << s.name << endl;
    cout << "The student address is: ";
    cout << s.address << endl;
    cout << "The student contact no. is: ";
    cout << s.contact_no << endl;
    return 0;
}