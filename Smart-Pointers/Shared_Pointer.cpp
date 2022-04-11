#include <iostream>
#include <memory>
using namespace std;

class share
{
    public:
	    void display()
	    {
		    cout << " Share Class - Display Method" << endl;
	    }
		~share()
		{
			cout<<" --- Memory is Destroyed --- "<<endl;
		}
};

int main()
{
	shared_ptr<share> s1(new share);
	cout << " Memory Address of s1 - " << s1.get() << endl;
	s1->display();
	
	shared_ptr<share> s2(s1);
	s2->display();
	cout << " Memory Address of s1 - " <<  s1.get() << endl;
	cout << " Memory Address of s2 - " <<  s2.get() << endl;

	cout << " The number of shared_ptr objects: " <<s1.use_count() << endl;
	cout << " The number of shared_ptr objects: " <<s2.use_count() << endl;

	s1.reset();
	cout << " Memory Address of s1 - " << s1.get() << endl;
	cout << " The number of shared_ptr objects : " << s2.use_count() << endl;
	cout << " Memory Address of s2 -  : " << s2.get() << endl;
	cout << " The number of shared_ptr objects : " << s2.use_count() << endl;

    s2.reset();
    cout << " Memory Address of s1 - " << s1.get() << endl;
	cout << " The number of shared_ptr objects : " << s2.use_count() << endl;
    cout << " Memory Address of s2 - " << s2.get() << endl;
	cout << " The number of shared_ptr objects  : " << s2.use_count() << endl;
	
	return 0;
}