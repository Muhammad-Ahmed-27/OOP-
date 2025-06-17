/*
Scenario:
Your application requires a container that can store a value of any type and return it.
Question:
Write a class template Box<T> that has:a private member value,setValue(T) and getValue() functions
*/
#include<iostream>
using namespace std;
template <class T>

class Box
{
	private:
		T value;
		
	public:
	    void setValue(T num)
		{
			value=num;
		}
		
		T getValue()
		{
			return value;
		}	
};

int main()
{
	Box <int>B1;
	Box <float>B2;
	
	cout<<"-------------Integer Value--------------"<<endl;
	B1.setValue(25);
	cout<<"             "<<B1.getValue()<<endl;
	cout<<"----------------------------------------"<<endl;
	B2.setValue(42.3);
	cout<<"-------------Float Value--------------"<<endl;
	cout<<"             "<<B2.getValue()<<endl;
	cout<<"----------------------------------------"<<endl;
}