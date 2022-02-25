#include<iostream>
using namespace std;
int add(int x,int y,int z)
{
	return (x+y+z);
	
}
float add(float x,float y,float z)
{
	return (x-y-z);
	
}


int main()
{
	cout<<"integer value is "<<add(10,20,30)<<endl;
	cout<<"float value is "<<add(20.30f,30.00f,40.50f);
	return 0;
	
}
