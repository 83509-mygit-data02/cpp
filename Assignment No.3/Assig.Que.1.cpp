// Q1. Write a class to find volume of a Cylinder by using following members. (volume of
// Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// getVolume()
// printVolume()
// Initialize members using constructor member initializer list.
// Optional – Use the Modular Apporach




#include<iostream>
using namespace std;


class Cylinder{

    const double Pi;
    double radius;
    double height;
    double volume;

public:

Cylinder():Pi(3.14)
{     
      cout<<"Inside Parameterless Constructor"<<endl;
      radius=8;
      height=3;
      volume=Pi*radius*radius*height;
      
}
Cylinder(double radius, double height):Pi(3.14){
      cout<<"Inside Parameterized Constructor"<<endl;
      this->radius=radius;
      this->height=height;
      
}

 double getRadius()
 {
    return radius;
 
 }

 void setRadius(){
    radius=4;
 }

 double getHeight(){
    return height;
 }

 void setHeight(){
    height=5;
 }

 double getVolume(){  
    volume=Pi*radius*radius*height;  
    return volume;
 }

 void printvolume(){

    cout<<"Volume of cylinder :- "<<volume<<endl;
 }

};



int main (){
    Cylinder c1;
    c1.printvolume();

    Cylinder c2(2,3);
    c2.setHeight();
    c2.getHeight();
    c2.setRadius();
    c2.getRadius();
    c2.getVolume();
    c2.printvolume();
  
    return 0;
 }
