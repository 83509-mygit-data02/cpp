// Q2. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// Allocate the memory for the the object dynamically and test the functunalities using time ptr.



#include<iostream>
using namespace std;

class Time
{
//Data members of class Time.
private:
    int hour;
    int minute;
    int second;

//Member function of class Time.
public:
//Parameterless constructor.
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;      
    }

//Parameterized constructor.
    Time(int hour,int minute,int second)
    {
        this -> hour = hour;
        this -> minute = minute;
        this -> second = second; 
    }

//Mutator/setter functions.
    void setHour()
    {
        hour = 10;
    }
    void setMinute()
    {
        minute = 10;
    }
    void setSeconds()
    {
        second = 10;
    }

//Inspector/getter functions.
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSeconds()
    {
        return second;
    }

//Facilitators of class Time.
    void  AcceptTime()
    {
        cout << "Enter time :" << endl;
        cout << " Hour = ";
        cin >> hour;
        cout << " Minute = ";
        cin >> minute;
        cout << " Second = ";
        cin >> second;
    }
    void printTime()
    {
        cout << " Time = " << hour << ":" << minute << ":" << second << endl;
    }

};

int main()
{
    Time *ptr ;
    ptr = new Time;

    cout << "Default ";
    ptr -> setHour();
    ptr -> setMinute();
    ptr -> setSeconds();
    ptr -> getHour();
    ptr -> getMinute();
    ptr -> getSeconds();
    

    ptr -> printTime();
    ptr -> AcceptTime();
    ptr -> printTime();
    
    delete ptr;
    ptr = NULL;

    return 0;
}