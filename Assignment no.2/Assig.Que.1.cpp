// Q1. Write a menu driven program to calculate volume of the box(length * width * height).
// Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
// Create the local objects in respective case and call the function to caluclate area.
// Menu options ->
// 1. Calculate Volume with default values
// 2. Calculate Volume with length,breadth and height with same value
// 3. Calculate Volume with different length,breadth and height values.



#include<iostream>
using namespace std;

class box{
   
   int length;
   int width;
   int height;
   
public:

box()
{
    cout<<"Inside Parameterless Constructor"<<endl; 
    length = 20;
    width  = 10;
    height = 30;        
}

box(int length,int width,int height){
    cout<<"Inside Parameterized Constructor"<<endl;
    this->length=length;
    this->width=width;
    this->height=height;      
} 

box(int length){
    cout << "Inside single parameterized Constructor" << endl;
    this->length=length;
    this->width=length;
    this->height=length;    
}


void displayvalues(){
    cout<<"volume = "<<length * width * height<<endl;
}
};


int main (){
   int Choice;

do {
    cout<<"Enter 0 for Exit"<<endl;
    cout<<"Enter 1 To Calculate Volume with default values"<<endl;
    cout<<"Enter 2 To Calculate Volume with length,breadth and height with same value"<<endl;
    cout<<"Enter 3 To Calculate Volume with different length,breadth and height values."<<endl;
    cout<<"=================================="<<endl;
    cout<<"Enter Choice"<<endl;
    cin>>Choice;
    
    switch(Choice){
            case 0:
                 cout<<"Thank You For Using The App"<<endl;break;
            case 1:
                 {
                    box b1;
                    b1.displayvalues();
                    cout<<"=================================="<<endl;
                    break;
                 }
            case 2:
                 {
                    box b2(10);
                    b2.displayvalues();
                    cout<<"=================================="<<endl;
                    break;
                 }    
            case 3:
                 {
                    box b3(20,15,30);
                    b3.displayvalues();
                    cout<<"=================================="<<endl;
                    break;
                 }
            default:
                    cout<<"Wrong Choice "<<endl;
                    cout<<"=================================="<<endl;
                    break;
                 
    }
}while(Choice!=0);
    return 0;
}