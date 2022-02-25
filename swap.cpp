//This is for swapping two numbers by pointers
#include<iostream>
using namespace std;
void swap(int *&n1,int *&n2)
{
	int *temp;
	*temp=*n1;
	*n1=*n2;
	n2=temp;
}
int main()
{
	int a=1,b=2;
	cout<<"BEfor swap done"<<endl;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	swap(&a,&b)
	cout<<"a="<<a<<endl<<"b="<<b;
	return 0;
	
}
