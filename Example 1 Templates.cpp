/*
Scenario:
You are asked to create a calculator that works for different numeric types (int, float).
Question:
Write a function template calculate that takes two values and performs addition, subtraction, multiplication, and division.
*/
#include<iostream>
using namespace std;
template <typename T>

void Calculation(T x,T y)
{
    T sum;
	sum=x+y;
	cout<<"Sum Of Two Numbers :"<<sum<<endl;
	T sub;
	sub=x-y;
	cout<<"Subtraction Of Two Numbers :"<<sub<<endl;
	T multi;
	multi=x*y;
	cout<<"Multiplication Of Two Numbers :"<<multi<<endl;
	T divide;
	divide=x/y;
	cout<<"Division Of two Numbers :"<<divide<<endl;
}

int main()
{   cout<<"-------------Integer Values Calculation--------------"<<endl;
	Calculation<int>(21,24);
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"-------------Float Values Calculation--------------"<<endl;
	Calculation<float>(25.1,24.1);
	cout<<"-----------------------------------------------------"<<endl;
}


