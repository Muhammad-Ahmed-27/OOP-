#include<iostream>
using namespace std;
template <class T>

class BoundedArray
{
	private:
		T* arr;
		int size;
		
	public:
	     BoundedArray(int s):size(s)
		 {	
		   for (int i = 0; i < size; i++)
		    {
            arr[i] = 0; 
		   }
	}
		
		void setvalue(T index,T value)
		{
			 if (index < 0 || index >= size)
			{
              throw index;
            }
			arr[index]=value;
		}
		
		T getindex(T index)
		{
			if(index<0||index>=size)
			{
				throw index;
			}
			return arr[index];
		}
};

int main()
{
	BoundedArray <int>arr(3);
	
    arr.setvalue(2,25);
    try
    {
      cout<<"Index :"<<arr.getindex(0)<<endl;
      cout<<"Index :"<<arr.getindex(3)<<endl;
    }
    
    catch(int ex)
    {
    	cout<<"Index out of bound : "<<ex<<endl;
	}
	
}