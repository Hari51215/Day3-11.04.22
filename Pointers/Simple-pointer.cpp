#include<iostream>
using namespace std;
int main()
{
	int num=0;
	int *ptr;
	
	ptr=&num;
	
	cout<<"Value of num :"<<num<<endl;
	cout<<"Address of num :"<<&num<<endl;
	cout<<"Value of ptr :"<<ptr<<endl;
	cout<<"Address of ptr :"<<&ptr<<endl;
	cout<<"Pointer ptr points to :"<<*ptr<<endl;
	
	num=10;
	
	cout<<"\nValue of num :"<<num<<endl;
	cout<<"Address of num :"<<&num<<endl;
	cout<<"Value of ptr :"<<ptr<<endl;
	cout<<"Address of ptr :"<<&ptr<<endl;
	cout<<"Pointer ptr points to :"<<*ptr<<endl;
	
	return 0;
}
