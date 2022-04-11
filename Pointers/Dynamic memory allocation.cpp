#include <iostream>
using namespace std;

int main()
{
    int *ptr=0;
    ptr = new int;
    cout <<ptr<< endl;    
    delete ptr;
    
    size_t size=0;
    double *temp;
    cout << "How many element do you want to read ? ";
    cin >> size;
    
    temp = new double[size];
    cout << temp << endl;
    delete [] temp;
    
    cout << endl;
    return 0;
}

