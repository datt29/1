#include<iostream>
using namespace std;
int sum(int x,int y=10,int z=12)
{
	return (x+y+z);
}
int main()
{
	cout<<"Sum is :"<<sum(5)<<endl;
	cout<<"Sum is :"<<sum(5,5)<<endl<<endl;
	cout<<"Sum is :"<<sum(5,5,5)<<endl<<endl;
	return 0;
}
