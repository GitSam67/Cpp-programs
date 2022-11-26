#include<iostream>
using namespace std;

class base{
    private:
    float a,b;
    public:
    void read(){
        cout<<"Enter two values:"<<endl;
        cin>>a>>b;
    }
    friend float mean(base v);
    };
    
    float mean(base v){
        return (v.a + v.b)/2;
    }


int main(){
    base obj1,obj2;
    obj1.read();
    obj2.read();
    cout<<"The mean of two values is: "<<mean(obj1)<<endl;
    cout<<"The mean of two values is: "<<mean(obj2);
    return 0;
}