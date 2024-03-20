// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();


#include<iostream>      
using namespace std;

class date
{
    int day;
    int month;
    int year;

public:

void initDate(){
    day=01;
    month=01;
    year=1000;
    cout<<day<<"/"<<month<<"/"<<year<<endl;
    cout << "=====================" << endl;
}
void printDateOnConsole(){

    cout<<day<<"/"<<month<<"/"<<year<<endl;
    
    
}
void acceptDateFromConsole(){

    cout<<"Enter day"<<endl;
    cin>>day;

    cout<<"Enter month"<<endl;
    cin>>month;

    cout<<"Enter year"<<endl;
    cin>>year;   
    cout << "=====================" << endl;
}
bool isleapyear(){
    if( year%4==0 || year%400==0 ){
    cout<<"It's a leap year"<<endl;
    cout << "=====================" << endl;
    return true;
    }
    else{
    cout<<"It's not a leap year"<<endl;
    cout << "=====================" << endl;
    return false;
    }
    }
};
int main (){
    class date d1;
    d1.initDate();
    int choice;

    do{
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
                d1.acceptDateFromConsole();
                break;           
            case 2:
                d1.printDateOnConsole();
                d1.isleapyear();
                break;
            default:
                cout<<"Wrong choice"<<endl;
                break;          
        }
    }while(choice!=0);
    return 0;
}
