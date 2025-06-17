#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter a Three Numbers:";
	cin>>num1>>num2>>num3;
	
    ofstream outfile("Number.txt");
    outfile<<num1<<" "<<num2<<" "<<num3;
    cout<<"Reading position :"<<outfile.tellp()<<endl;
    outfile.seekp(-4,ios::end);
    outfile<<1111;
    cout<<"after changing in second value Reading position :"<<outfile.tellp()<<endl;
    outfile.close();
    
    ifstream infile("Number.txt");
    infile.clear();
    cout<<"Displaying position :"<<infile.tellg();
    infile>>num1>>num2>>num3;
    infile.clear();
    cout<<"Displaying position :"<<infile.tellg();
    infile.close();
    
    ofstream outfile1("Sum.txt");
    int sum;
    sum=num1+num2+num3;
    outfile1<<sum;
    outfile.close();
}