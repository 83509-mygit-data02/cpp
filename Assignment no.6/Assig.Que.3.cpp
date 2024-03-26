#include<iostream>
using namespace std;

class employee{
    int id;
    double salary;

public:
employee(){
    cout<<"Inside employee"<<endl;
}

employee(int id,double salary){
    cout<<"Inside employee(int,double)"<<endl;
}

void setid(int id){
    this->id=id;
}

int getid(){
    return this->id;    
}

void setsalary(double salary){
    this->salary=salary;
}

double getsalary(){
    return this->salary;
}

virtual void accept(){

    cout<<"Enter id :"<<endl;
    cin>>id;

    cout<<"Enter salary :"<<endl;
    cin>>salary;

}

virtual void display(){

    cout<<"Id : "<<id<<"        salary : "<<salary<<endl;
}

virtual ~employee(){
    cout<<"Inside ~employee"<<endl;
}
};

class manager: virtual public employee {
private:
     double bonus;

public:

manager(){
    cout<<"Inside manager"<<endl;
}

manager(int id,double salary,double bonus){
    cout<<"Inside manager(int,double,double)"<<endl;

}

void setbonus(double bonus){
    this->bonus=bonus;
}

double getbonus(){
    return this->bonus;
}

void accept(){
    employee::accept();
    acceptmanager();
}

void display(){
    employee::display();
    displaymanager();
}

~manager(){
    cout<<"~manager"<<endl;
}

protected:
void acceptmanager(){
    cout<<"Enter bonus"<<endl;
    cin>>bonus;
}

void displaymanager(){
    cout<<"Bonus : "<<bonus<<endl;
}
};

class salesman : virtual public employee{
private:
double commission;

public:

salesman(){
    cout<<"Inside salesman()"<<endl;
}

salesman(int id,double salary,double commission){
    cout<<"Inside salesman(int,double,double)"<<endl;

}

void setcommission(double commission){
    this->commission=commission;
}

double getcommission(){
     return this->commission;
}

void accept(){
    employee::accept();
    acceptsalesman();
}

void display(){
    employee::accept();
    displaysalesman();
}

~salesman(){
    cout<<"~salesman"<<endl;
}
protected:

void acceptsalesman(){
    cout<<"Enter commission"<<endl;
    cin>>commission;
}

void displaysalesman(){
    cout<<"commission : "<<commission<<endl;
}
};

class salesmanager : public manager, public salesman
{
public:
    salesmanager()
    {
        cout<<"Inside salesmanager()"<<endl;
    }
    salesmanager(int id, double salary, double bonus, double commission)
    {
        cout<<"Inside salesmanager(int,double,double,double)"<<endl;
    }
    ~salesmanager()
    {
        cout<<"~Salesmanager()"<<endl;
    }
    void accept()
    {
        employee::accept();
        acceptmanager();
        acceptsalesman();
    }
    void display()
    {
        employee::display();
        displaymanager();
        displaysalesman();
    }
};

int main(){
    
    salesmanager s;
    s.accept();
    s.display();

    employee *eptr = new salesmanager;
    eptr->accept(); 
    eptr->display();

    delete eptr;
    eptr = NULL;

    
    return 0;
}
