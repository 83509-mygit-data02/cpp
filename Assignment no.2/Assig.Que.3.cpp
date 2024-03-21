// Q3. Write a class Address with data members (string building, string street, string city ,int pin)
// Implement constructors, getters, setters, accept(), and display() methods.
// Test the class functunalities by creating the object of class and calling all the functions.


#include<iostream>
using namespace std;

class Address{
private:
    string building;
    string street; 
    string city;
    int pin;

public:
    // parameterless constructor
    Address(){
    building = "Kohinoor Heritage";
    street = "Eighty Foot Highway"; 
    city = "Ratnagiri";
    pin = 415612;
    }

    //parameterized constructor
    Address(string building, string street,string city, int pin){
       this->building = building;
       this->street = street;
       this->city = city;
       this->pin = pin;
    }
    
    //setter
    void setBuilding(string building){
        this->building = building;
    }

    void setStreet(string street){
        this->street = street;
    }

    void setCity(string city){
        this->city = city;
    }

    void setPin(int pin){
        this->pin = pin;
    }

    //getter
    string getBuilding(){
        return building;
    }

    string getStreet(){
        return street;
    }

    string getCity(){
        return city;
    }

    int getPin(){
        return pin;
    }

    void accept(){
        cout<<"Enter building: "<<endl;
        cin>>building;
        cout<<"Enter street: "<<endl;
        cin>>street;
        cout<<"Enter city: "<<endl;
        cin>>city;
        cout<<"Enter pin: "<<endl;
        cin>>pin;
    }

    void display(){
        cout<<"building: "<<building<<endl;
        cout<<"street: "<<street<<endl;
        cout<<"city: "<<city<<endl;
        cout<<"pin: "<<pin<<endl;
    }

};
int main(){
    Address a;
    a.setBuilding("Nilkamal");
    cout<<"get building: "<<a.getBuilding()<<endl;

    a.setStreet("Tilak Road");
    cout<<"get street: "<<a.getStreet()<<endl;

    a.setCity("Chiplun");
    cout<<"get city: "<<a.getCity()<<endl;

    a.setPin(415604);
    cout<<"get pin: "<<a.getPin()<<endl;

    string building;
    string street; 
    string city;
    int pin;
    Address a1(building, street,city,pin);
    a1.accept();
    a1.display();
   
    return 0;
}