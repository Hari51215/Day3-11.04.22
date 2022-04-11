#include <iostream>
using namespace std;
int main() 
{    
    int arr[] {1,10,100};   
    int *arrptr {arr};
    
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    
    cout << arrptr[0] << endl;
    cout << arrptr[1] << endl;
    cout << arrptr[2] << endl;
    
    cout << *arrptr << endl;
    cout << *(arrptr + 1) << endl;
    cout << *(arrptr +2) << endl;
    
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr +2) << endl;
    return 0;
}

