// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();


#include<iostream>
using namespace std;

struct date{
    int day;
    int month;
    int year;

void initDate(){
    day=01;
    month=01;
    year=1000;
    cout << "=====================" << endl;
    cout<<day<<"/"<<month<<"/"<<year<<endl;
    
}
void printDateOnConsole(){

    cout<<day<<"/"<<month<<"/"<<year<<endl;
    
}
void acceptDateFromConsole(){
    
    cout<<"Enter day "<<endl;
    cin>>day;

    cout<<"Enter month "<<endl;
    cin>>month;
 
    cout<<"Enter year"<<endl;
    cin>>year;
    
}
bool isleapyear(){
     if( year%4==0 || year%400==0 ){
    cout<<"It's a leap year"<<endl;
    return true;
    }
    else{
    cout<<"It's not a leap year"<<endl;
    return false;
    }
    }

};


int main (){
    struct date d;
    d.initDate();
    int choice;

    do {
        cout << "=====================" << endl;
        cout<<"Enter 0 to exit"<<endl;
        cout<<"Enter 1 to Acceptdate"<<endl;
        cout<<"Enter 2 to display"<<endl;
        cout<<"Enter choice"<<endl;
        cin>>choice;
        cout << "=====================" << endl;

        switch(choice)
        {
            case 0:
                cout<<"Thank you for using the app"<<endl;break;
            case 1:
                d.acceptDateFromConsole();
                break;           
            case 2:
                d.printDateOnConsole();
                d.isleapyear();
                break;
            default:
                cout<<"Wrong choice"<<endl;
                break;          
        }
    }while(choice!=0);
    return 0;
    }
