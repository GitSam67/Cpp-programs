#include<iostream>
using namespace std;

inline float add(int a, int b){
    return a+b;
}
inline float sub(int c, int d){
    return c-d;
}
inline float mull(int e, int f){
    return e*f;
}
inline float divs(int g, int h){
    return g/h;
}

int main(){
    int a=7,b=10;
    cout << "Addition:";
    cout << add(a,b) <<endl;
    cout << "Subtraction:";
    cout << sub(a,b) <<endl;
    cout << "Multiplication:";
    cout << mull(a,b) <<endl;
    cout << "Division:";
    cout << divs(a,b) <<endl;
    
    return 0;
}