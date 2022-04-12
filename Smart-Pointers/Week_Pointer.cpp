#include <iostream>
#include <memory>

using namespace std;
class Bike;
class Car 
{
    shared_ptr<Bike> bptr;
    public:
        void set_Bike(shared_ptr<Bike> &b)
        {
            bptr = b;
        }
        Car() 
        { 
            cout << "Car Constructor" << endl; 
        }
        ~Car() 
        { 
            cout << "Car Destructor" << endl; 
        }
};

class Bike
{
    weak_ptr<Car> cptr;
    public:
        void set_Car(shared_ptr<Car> &c) 
        {
            cptr = c;
        }
        Bike() 
        { 
            cout << "Bike Constructor" << endl; 
        }
        ~Bike() 
        { 
            cout << "Bike Destructor" << endl; 
        }
};

int main() 
{
    shared_ptr<Car> c  = make_shared<Car>();
    shared_ptr<Bike> b = make_shared<Bike>();
    c->set_Bike(b);
    b->set_Car(c);
    
    return 0;
}