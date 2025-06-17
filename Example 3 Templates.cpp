/*Scenario:You want to create a key-value pair class, like a dictionary entry.
Question:
Write a class template Pair<K, V> with: Members: key and value  Functions: set() and display()
*/
#include<iostream>
using namespace std;
template <class K,class V>

class Pair
{
	private:
		K key;
		V value;
		
		public:
			void setValues(K num,V val)
			{
				key=num;
				value=val;
			}
			
			K getKey()
			{
				return key;
			}
			
			V getValue()
			{
				return value;
			}
};

int main()
{
	Pair <int,string>p;
	
	p.setValues(1,"Book");
	cout<<p.getKey()<<"- "<<p.getValue();
}