//Static data members and static data function
#include<iostream>
using namespace std;
class employee
{
	static int count;  //Static data member
	public:
	void setdata()
	{
		cout<<"Enter I.D";
		cin>>id;
		count++;
	}
	void getdata()
	{
		cout<<"Employee id is :"<<id<<endl<<"count :"<<count<<endl;
		
	}
	static void getcount() //Static data function
	{
		cout<<"Count for function is:"<<count<<endl;
		
	}
};
int employee :: count; //Default valur will be considered 0


int main()
{
	emoloyee hari,ram,sharma;
	hari.setdata();
	hari.getdata();
	employee::getcount(); //Calling Static function of the class
	ram.setdata();
	ram.getdata();
	employee::getcount();
	sharma.setdata();
	sharma.getdata();
	employee::getcount();

	return 0;
}
