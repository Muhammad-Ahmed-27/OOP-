#include<iostream>
using namespace std;
template <class A>

class Person
{
	A age;
	
	public:
		void Setvalue(A num)
		{
			age=num;
			if(age<0)
			{
				throw age;
			}

		}
		
		A getAge()
		{
			return age;
		}
};

int main()
{
	Person <int>P;

	int a;
	cout<<"Enter Age :";
	cin>>a;
	
	cout<<"------------Person Age-------------"<<endl;
	try
	{
	P.Setvalue(a);
	cout<<"Age :"<<P.getAge()<<endl;
}
	catch(int ex)
	{
		cout<<"invalid Input :"<<ex;
	}
}