#include<iostream>
#include<memory>
using namespace std;

class unique 
{
    public:
	    void display()
	    {
	    	cout << "Unique class - Display Method" << endl;
	    }
};

int main()
{
	unique_ptr<unique> u1 (new unique);
	u1->display();
	cout << "Memory Address of u1 - " << u1.get() << endl;

	unique_ptr<unique> u2 = move(u1);
	u2->display();
	cout << "Memory Address of u1 - " << u1.get() << endl;
	cout << "Memory Address of u2 - " << u2.get() << endl;

    unique_ptr<unique> u3 = move(u2);
	u3->display();
	cout << "Memory Address of u1 - " << u1.get() << endl;
	cout << "Memory Address of u2 - " << u2.get() << endl;
	cout << "Memory Address of u3 - " << u3.get() << endl;
	return 0;
}
