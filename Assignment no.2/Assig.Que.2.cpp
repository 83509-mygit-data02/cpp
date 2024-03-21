// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.


#include <iostream>
using namespace std;

class tollbooth
{
private:
    unsigned int noOfCars;
    double totalAmt;

public:
    tollbooth()
    {
        noOfCars = 0;
        totalAmt = 0;
    }

    int TotalnoOfCars = 0;
    int newTotal;
    void payingCar()
    {
        noOfCars = noOfCars + 1;
        cout << "No of cars: " << noOfCars << endl;
        totalAmt = noOfCars * 0.50;
        cout << "total amount:" << totalAmt << endl;
        cout<<"=================================="<<endl;
    }

    void nopayCar()
    {
        TotalnoOfCars = TotalnoOfCars + 1;
        newTotal = totalAmt;
        cout << "Number of non pay cars: " << TotalnoOfCars << endl;
        cout << "total amount:" << newTotal << endl;
        cout<<"=================================="<<endl;
    }
    void printOnConsole()
    {

        cout << "total amt: " << totalAmt << endl;
        // cout<<"Second total: "<< newTotal<<endl;
        cout << "number of paying cars: " << noOfCars << endl;

        cout << "number of non paying cars total: " << TotalnoOfCars << endl;
        cout<<"=================================="<<endl;
    }
};

int main()
{
    tollbooth t1;
    t1.printOnConsole();
    int choice;

    do
    {   
        cout<<endl;
        cout << "Enter 0 for exit: " << endl;
        cout << "Enter 1 paying car" << endl;
        cout << "Enter 2 non paying car" << endl;
        cout << "Enter 3 print on console" << endl;
        cout << "Enter choice: " << endl;
        cin >> choice;
        cout<<endl;

        switch (choice)
        {
        case 0:
            cout << "Exit........" << endl;
            break;

        case 1:
            t1.payingCar();
            break;

        case 2:
            t1.nopayCar();
            break;

        case 3:
            t1.printOnConsole();
            break;

        default:
            cout << "Enter correct choice!";
            break;
        }

    } while (choice != 0);
}