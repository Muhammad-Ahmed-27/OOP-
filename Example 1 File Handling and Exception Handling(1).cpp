#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float A,B;
	cout<<"Enter a two number :";
	cin>>A>>B;
	
	try
	{
	ofstream obj("My file.txt");

	  if(!obj)
	  {
	  	throw "Invalid write file";
	  }
	cout<<"Current Position :"<<obj.tellp()<<endl;
	obj<<"A  B "<<A<<"  "<<B<<endl;
	cout<<"Current Position :"<<obj.tellp();
	obj.close();
	
	ifstream obj1("My file.txt");

		if(!obj1)
		{
			throw "Invalid read file";
		}
	cout<<"Current Position :"<<obj1.tellg()<<endl;
	obj1>>A>>B;
	cout<<"Current Position :"<<obj1.tellg()<<endl;
	obj1.close();
	
	ofstream obj2("Your FIle.txt");
	double division;

	if(B==0)
	{
		throw "Out of Bound";
	}
	cout<<"Current position :"<<obj2.tellp()<<endl;
	division=A/B;
	obj2<<"Multiplication result: " <<(float) division;
	cout<<"Current position :"<<obj2.tellp()<<endl;
    obj2.close();
	}
	catch(const char* ex)
	{
		cout<<ex;
	}

}