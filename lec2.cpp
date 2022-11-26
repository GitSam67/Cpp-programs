#include<iostream>
using namespace std;

class avg {
    private:
        float n;
    public:
        void get_num(){
            cout<<"Enter a number:"<<endl;
            cin>>n; 
    }
        friend float func1(avg& x,avg& y);
        friend float func2(avg& p,avg& q,avg& r);
};

float func1(avg & x,avg & y){
        return (x.n + y.n);   
    }

float func2(avg & p,avg & q,avg & r){
        return (p.n + q.n + r.n);        
    }

int main(){
    avg obj[5];
    for(int i=0;i<5;i++){
        obj[i].get_num();
    }
    cout<<"The average of these five numbers are: "<<endl;
    cout<<(func1(obj[0],obj[1])+func2(obj[2],obj[3],obj[4]))/5;
    return 0;
}