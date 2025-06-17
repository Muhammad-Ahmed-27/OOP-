#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int number;
	string name;
	
	cout<<"Enter a number:";
	cin>>number;
	cin.ignore();
	cout<<"Enter a name";
	getline(cin,name);
	
	try
	{
		ofstream outfile("Identity.txt");
		if(!outfile)
		{
			throw "This File is not created";
		}
		outfile<<number<<"  "<<name;
		cout<<"Reading positon of Identity file :"<<outfile.tellp()<<endl;
		outfile.close();
		
		ifstream infile("Identity.txt");
		if(!infile)
		{
		    throw "This File is not created";
	    }
		infile>>number>>name;
		infile.clear();
		cout<<"Displaying positon of Identity file :"<<infile.tellg()<<endl;
		infile.clear();
		infile.seekg(-10,ios::end);
		cout<<"Jumping to the integer value :"<<infile.tellg();
		infile.close();
	}
	catch(const char* ex)
	{
		cout<<ex;
	}
}