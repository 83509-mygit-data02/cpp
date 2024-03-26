// Q1. Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
// type Date.
// Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
// be of type date.
// Employee class should be inherited from Person.
// Implement following classes. Test all functionalities in main().
// (Note - Perform the Association and Inheritance in the above case.)


#include<iostream>
using namespace std;

class date{

    int day;
    int month;
    int year;

public:

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

void acceptdata(){

    cout<<"Enter name :"<<endl;
    cin>>name;

    cout<<"Enter address :"<<endl;
    cin>>address;

    cout<<"Enter birthdate:";
    birthdate.acceptdate();
} 
void displaydata(){

    cout<<"Name : "<<name<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"birthdate :"<<endl;
    birthdate.displaydate();
    cout<<endl;
}

};

class employee : public person {

    int empid;
    double sal;
    string dept;
    date empdoj;  // Association-> composition

public:

void acceptdata(){

    cout<<"Enter id :"<<endl;
    cin>>empid;

    cout<<"Enter salary :"<<endl;
    cin>>sal;

    cout<<"Enter department :"<<endl;
    cin>>dept;

    cout<<"Enter date of joining :";
    empdoj.acceptdate();
    person::acceptdata();
    
}

void displaydata(){

    cout<<"id : "<<empid<<endl;
    cout<<"salary : "<<sal<<endl;
    cout<<"department : "<<dept<<endl;
    cout<<"date of joining"<<endl;
    empdoj.displaydate();
    person::displaydata();
}

};

int main (){
    
    employee e;
    person p;
    int choice;

    do
    {   
        cout<<endl;
        cout << "Enter 0 for exit: " << endl;
        cout << "Enter 1 accepet data from person and display on console" << endl;
        cout << "Enter 2 accept data from employee and display on console" << endl;
        cout << "Enter choice: " << endl;
        cin >> choice;
        cout<<endl;

    switch (choice) {
        case 0:
            cout << "Exit...Thank you....." << endl;
            break;

        case 1:
           { p.acceptdata();
             p.displaydata();
            break;}

        case 2:
            {e.acceptdata();
             e.displaydata();
            break;}

        default:
            cout << "Enter correct choice!"<<endl;
            break;
        }

    } while (choice != 0);

    person *ptr = new employee;
    ptr->acceptdata();
    ptr->displaydata();
    delete ptr;
    ptr=NULL;
    return 0;
}
    
    

