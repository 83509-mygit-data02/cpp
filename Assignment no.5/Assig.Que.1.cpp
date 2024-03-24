// Q1. Implement following classes. Test all functionalities in main().
// Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. The birthdate should be of
// type date.
// Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
// be of type date.


#include<iostream>
using namespace std;

class date{

    int day;
    int month;
    int year;

public:

date(){

    cout<<"Inside parameterless constructor of date class"<<endl;
    day=1;
    month=10;
    year=1000;
    cout<<day<<"/"<<month<<"/"<<year<<endl;
    
}

date(int day,int month,int year){

    cout<<"Inside parameterized constructor of date class"<<endl;
    this->day=day;
    this->month=month;
    this->year=year;
}
void acceptdate(){

    cout<<"\nEnter day :"<<endl;
    cin>>day;

    cout<<"Enter month :"<<endl;
    cin>>month;

    cout<<"Enter year :"<<endl;
    cin>>year;

    cout<<endl;

}

void displaydate(){

    cout<<day<<"/"<<month<<"/"<<year<<endl;

}

};

class person{

    string name;
    string address;
    date birthdate; // Association-> Composition
    
public:

person(){

    cout<<"Inside parameterless constructor of person class"<<endl;
    name="Shree";
    address="Ratnagiri";
}

person(string name,string address,int day,int month,int year):birthdate(day,month,year){

     cout<<"Inside parameterized constructor of person class"<<endl;
     this->name=name;
     this->address=address;     
}


void acceptperson(){

    cout<<"Enter name :"<<endl;
    cin>>name;

    cout<<"Enter address :"<<endl;
    cin>>address;

    cout<<"Enter birthdate:";
    birthdate.acceptdate();
    
}

void displayperson(){

    cout<<"Name : "<<name<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"birthdate :"<<endl;
    birthdate.displaydate();
    cout<<endl;
}

};
class employee{

    int id;
    float sal;
    string dept;
    date dojemp ;  // Association-> composition

public:

employee(){

    cout<<"Inside parmeterless costructor of employee class"<<endl;
    id=101;
    sal=21500;
    dept="sales";
}

employee(int id,float sal,string dept,int day,int month,int year) : dojemp(day,month,year){

    cout<<"Inside parmeterized costructor of employee class"<<endl;
    this->id=id;
    this->sal=sal;
    this->dept=dept;
}


void acceptemp(){

    cout<<"Enter id :"<<endl;
    cin>>id;

    cout<<"Enter salary :"<<endl;
    cin>>sal;

    cout<<"Enter department :"<<endl;
    cin>>dept;

    cout<<"Enter date of joining :";
    dojemp.acceptdate();
}

void displayemp(){

    cout<<"id : "<<id<<endl;
    cout<<"salary : "<<sal<<endl;
    cout<<"department : "<<dept<<endl;
    cout<<"date of joining"<<endl;
    dojemp.displaydate();
}

~employee(){
    cout<<"Inside destructor of employee class"<<endl;
    }
};

int main(void){

    person p;
    p.acceptperson();
    employee e;
    e.acceptemp();
    p.displayperson();
    e.displayemp();
    return 0;
}