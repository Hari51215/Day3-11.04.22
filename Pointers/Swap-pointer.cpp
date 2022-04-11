#include<iostream>
using namespace std;
class swap1
{
	public:
		void swapable(int *p1,int *p2)
		{
			*p1=*p1+*p2;    
			*p2=*p1-*p2;    
			*p1=*p1-*p2;
		}
};

int main()
{
	int n1,n2;
	cout<<"Enter the numbers to swap :";
	cin>>n1>>n2;
	swap1 s1;
	cout<<"Before calling Swapable function :"<<n1<<" "<<n2<<endl;
	s1.swapable(&n1,&n2);
	cout<<"After calling Swapable function :"<<n1<<" "<<n2<<endl;
	return 0;
}
