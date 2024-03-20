// Q3. Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();


#include <iostream>
using namespace std;

class Student
{
    private:
    int rollno;
    string name;
    double marks;

    public:
    void initStudent()
    {
        rollno = 23;
        name = "shrinath";
        marks = 75;
        cout<<"======================="<<endl;
        cout <<"Roll No:- "<< rollno <<"  Name"<< ":- " << name <<"   Marks"<< ":- " << marks << endl;
        cout<<"======================="<<endl;
    }

    void acceptStudentFromConsole()
    {
        cout << "Enter rollno - ";
        cin >> rollno;
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter marks - ";
        cin >> marks;
        cout << "=====================" << endl;
         
    }

    void printStudentOnConsole()
    {
        
        cout << "Rollno - " << rollno << endl;
        cout << "Name - " << name << endl;
        cout << "Marks - " << marks << endl;
        cout << "=====================" << endl;

    }

};

int main()
{
    int choice;
    Student s;
    s.initStudent();


    do 
    {
        cout << "0. EXIT" << endl;
        cout << "1. acceptStudentFromConsole" << endl;
        cout << "2. printStudentOnConsole" << endl;
        cout<<"====================="<<endl;
        cout<<"Enter choice"<<endl;
        cin >> choice;
        cout << "=====================" << endl;

        switch(choice)
        {
            case 0:
                cout<< "Thank You For Using Our App..." << endl;
                break;
            case 1:
                s.acceptStudentFromConsole();
                break;

            case 2:
                s.printStudentOnConsole();
                break;
            default:
                cout << "....Wrong Choice...." << endl;
                break;
 
        }

    }while(choice != 0);

    return 0;

}