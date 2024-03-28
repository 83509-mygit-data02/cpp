// Q1. Write a class to store Account information of Bank customer by using following class diagram.
// Use enum to store information of account type.
// Create an array of 5 Accounts in main() and accept their details from user.
// Write Menu driven program to deposit/withdraw amount from the account.
// After each transaction display updated account balance.
// Throw exceptions for invalid values.
// Also implement an exception class InsufficientFundsException.
// In withdraw if sufficient balance is not available in account or while deposit the entered amount is
// negative then throw this exception.

#include <iostream>
using namespace std;

enum EaccountType
{
    saving = 1,
    current,
    dmat
};

class InsufficientFundsException
{
private:
    int Accno;
    double CurrentBalance;
    double WithdrawAmount;

public:
    InsufficientFundsException(int Accno, double CurrentBalance, double WithdrawAmount)
    {

        this->Accno = Accno;
        this->CurrentBalance = CurrentBalance;
        this->WithdrawAmount = WithdrawAmount;
    }

    void display()
    {

        cout << "Insufficient Balance" << endl;
        cout << "Accno : " << Accno << "  CurrentBalance : " << CurrentBalance << "  WithdrawAmount : " << WithdrawAmount << endl;
    }
};

class Account
{
private:
    int Accno;
    EaccountType type;
    double Balance;

public:
    Account()
    {

        // cout << "Inside parameterless ctor of Account class" << endl;
    }

    Account(int Accno, EaccountType type, double Balance)
    {

        cout << "Inside parameterized ctor of Account class" << endl;
        this->Accno = Accno;
        this->type = type;
        this->Balance = Balance;
    }

    int getAccno()
    {
        return Accno;
    }

    double getBalance()
    {
        return Balance;
    }

    void withdraw()
    {
        cout << "your balance is - " << Balance << endl;
        cout << "Enter amount to withdraw - ";
        double amount;
        cin >> amount;
        if (Balance < amount)
            throw InsufficientFundsException(Accno, Balance, amount);

        this->Balance = Balance - amount;
        cout << "Balance  = " << Balance << endl;
    }

    void accept()
    {
        int choice;
        try
        {
            cout << "1. SAVINGS" << endl;
            cout << "2. CURRENT" << endl;
            cout << "3. DMAT" << endl;
            cout << "Enter your account type to create - ";
            cin >> choice;
            if (choice <= 0 || choice > 3)
                throw 1;
            this->type = EaccountType(choice);
            
        }

        catch (int)
        {
             cout << "Invalid Choice Entered" << endl;
        }

        cout << "Enter Accno : " << endl;
        cin >> Accno;

        cout << "Enter Balance : " << endl;
        cin >> Balance;
    }

    void displayAccountDetails()
    {
        
        int choice;
        cout << "Type :";
        cin >> choice;
        type = EaccountType(choice);
        switch (type)
        {
        case saving:
            cout << "Savings" << endl;
            break;
        case current:
            cout << "Current" << endl;
            break;
        case dmat:
            cout << "DMAT" << endl;
            break;
        }

        cout<<"Balance : "<<Balance<<endl;
       
    }

    void deposit()
    {

        cout << "your balance is : " << Balance << endl;
        cout << "Enter amount to deposit : " << endl;
        double amount;
        cin >> amount;
        this->Balance = Balance + amount;
        cout << "Balance  = " << Balance << endl;
    }

    void display(){
        cout<<"Accno : "<<Accno<<"  Balance : "<<Balance<<endl;
    }
};

int main()
{

    Account *arr[5];
    int index = 0;
    int choice;
    do
    {
        cout << "********************************" << endl;
        cout << "Enter 0 To Exit" << endl;
        cout << "Enter 1 To Accept Account Details" << endl;
        cout << "Enter 2 To Deposit Money" << endl;
        cout << "Enter 3 To Withdraw Money" << endl;
        cout << "Enter 4 To Display Account Details" << endl;
        cout << "Enter Choice" << endl;
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 0:
            cout<<"Exit....."<<endl;break;
        case 1:
            if (index < 5)
            {
                arr[index] = new Account();
                arr[index]->accept();
                index++;
            }
            else
            {
                cout << "Array is full....." << endl;
            }
            break;

        case 2:
        {
            int accno;
            cout << "Enter accno : ";
            cin >> accno;
            for (int i = 0; i < index; i++)
                if (accno == arr[i]->getAccno())
                    arr[i]->deposit();
        }
        break;

        case 3:
        {
            int accno;
            cout << "Enter accno : ";
            cin >> accno;
            for (int i = 0; i < index; i++)
                try
                {
                    if (accno == arr[i]->getAccno())
                        arr[i]->withdraw();
                }
                catch (InsufficientFundsException e)
                {
                    e.display();
                }
           
        }
        break;

        case 4:
        {
            int accno;
            cout << "Enter accno : " << endl;
            cin >> accno;
            for (int i = 0; i < index; i++)
            {
            if (accno == arr[i]->getAccno())
                arr[i]->displayAccountDetails();
                
            }
            
        }
        break;

        default:
            cout << "Wrong Choice" << endl;
            break;
        }
    } while (choice != 0);

    cout<<"Thank you for using the app"<<endl;
    for (int i = 0; i<index; i++)
    {
        delete arr[i];
        arr[i]=NULL;
    }
    
}