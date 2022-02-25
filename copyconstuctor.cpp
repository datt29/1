//For copy constructor
#include<iostream>
using namespace std;
class A
{
	private:
	int i=10;
	public:
	A()
	{
		cout<<"It's a constructor"<< endl;
	}
	A(A &obj)
	{
	cout << "It's a copy constructor"<< endl;
	}
	void add(A obj)
	{
		cout<<"Inside the another function"<< endl
	}

};
int main()
{
 A obj1;
 A obj2=obj1;
 obj1.add(obj1);
 return 0;
}
