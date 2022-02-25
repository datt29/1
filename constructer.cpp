//code for constructor and distructor


#include<iostream>
using namespace std;
class distance
{
	int feet,inch;
	public:
	distance()   //constructor made
	{
		cout<<"Default"<<endl;
		
	}
	distance(int f,int i)
	{
		feet=f;
		inch=i;
		cout<<feet<<endl<<inch<<endl;
		
	}
	~distance() //destructor 
	{
		cout<<"Called the Destructor"<<endl;
	}
};
int main()
{
	distance onj1,obj2(14,14);
	return 0;
}
