#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
        int s,l,b;
        float r,base,height;
        cout<<"Enter side of a square: ";
        cin>>s;
        cout<<"Enter length of rectangle: ";
        cin>>l;
        cout<<"Enter breadth of rectangle: ";
        cin>>b;
        cout<<"Enter radius of circle: ";
        cin>>r;
        cout<<"Enter base of triangle: ";
        cin>>base;
        cout<<"Enter height of triangle: ";
        cin>>height;
        cout<<"Area of square is "<<area(s)<<"\n";
        cout<<"Area of rectangle is "<<area(l,b)<<"\n";
        cout<<"Area of circle is "<<area(r)<<"\n";
        cout<<"Area of triangle is "<<area(base,height)<<"\n";
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float h)
{
   return((bs*h)/2);
}