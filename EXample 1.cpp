#include<iostream>
using namespace std;

class sensor
{
	public:
		virtual void reading()=0;
};

class sensorlight:public sensor
{
	private:
		int value;
		string status;
	public:	
		void reading()
		{
			cout<<"Current Value :";
			cin>>value;
			cin.ignore();
			cout<<"Current Status :";
			getline(cin,status);
		}
};

class sensorRain:public sensor
{
	private:
		int value;
		string status;
    public:
    	void reading()
    	{
    		cout<<"Current Value :";
			cin>>value;
			cin.ignore();
			cout<<"Current Status :";
			getline(cin,status);	
		}
};

int main()
{
	sensor* S;
	sensorlight sl;
	S=&sl;
	cout<<"-----------lightsensor-------"<<endl;
	S->reading();
	cout<<"-----------------------------"<<endl;
	sensorRain sr;
	S=&sr;
	cout<<"-----------Rainsensor-------"<<endl;
	S->reading();
	cout<<"-----------------------------"<<endl;

}