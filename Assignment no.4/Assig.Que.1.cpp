// Q1. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
// Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
// given, allocate stack of size 5.
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().


#include<iostream>
using namespace std;

class stack{
   
    int limit;
    int *ptr;
    int top;

public:

stack(int size){
    limit = size;
    ptr = new int[limit];
    top = - 1;
}

void push(int value){
    if(isfull())
    {
        cout<<"Stack Overflow "<<endl;
        cout<<"======================"<<endl;
        return;
    }
    else
    {
    ptr[++top]=value;
    }
}

void pop(){
    if(isempty())
    {
        cout<<"Stack underflow "<<endl;
        cout<<"======================"<<endl;
        return;
    }
    else
    {
    ptr[--top];
    }
}

int peek(){
    return ptr[top];
}

bool isfull(){
    return top==limit-1;
}

bool isempty(){
    return top== -1;
}

~stack(){
    delete[]ptr;
    ptr=NULL;
}

void print(){
    if(isempty()){
        cout<<"stack is empty"<<endl;
        return;
    }
    else{
        cout<<"Stack Element::"<<endl;
        cout<<"======================"<<endl;
        for(int i=0; i<5; i++){
            cout<<ptr[i]<<"  ";
        }
        return;
    }
}
};

int main (){
    stack s1(5);
    int choice;
do{
    cout<<"Enter 0 for Exit"<<endl;
    cout<<"Enter 1 to push elements"<<endl;
    cout<<"Enter 2 to pop elements "<<endl;
    cout<<"Enter 3 to peek top most element in the stack"<<endl;
    cout<<"Enter 4 to print elements"<<endl;
    cout<<"Enter choice"<<endl;
    cin>>choice;
    cout<<endl;
    
    switch (choice)
    {
    case 0:
        cout<<"Thank you..."<<endl;
        break;
    case 1:
        int value;
        cin>>value;
        s1.push(value);
        break;
    case 2:    
        s1.pop();
        break;
    case 3:
        cout<<s1.peek()<<endl;
        break;  
    case 4:
        s1.print();break;      
    default:
        cout<<"Wrong Choice"<<endl;
        break;
    }
}while(choice!=0);
     return 0;
}