#include<iostream>
using namespace std;

class example{
    public:
    string sname(string name){
        return name;
    }
    string sname(string fname, string lname){
        return fname +" "+ lname;
    }
};

int main(){
    example c;
    cout << c.sname("Arjun")<<endl;
    cout << c.sname("Arjun", "Sharma");
    return 0;
}