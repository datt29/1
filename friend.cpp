#include<iostream>
using namespace std;


//Normal friend function calling
class numbers{
	int num1,num2;
	public:
	void setdata(int a,int b);
	friend int add(numbers N);  //Friend Function called
	
};
void numbers :: setdata(int a,int b){
	num1=a;
	num2=b;

}
int add(numbers N)
{
return (N.num1+N.num2);
}
int main()
{
	numbers N1;
	N1.setdata(10,20);
	cout<<"Sum = "<<add(N1);
	return 0;
}



// Friend function between two classes
/*
class square;
class rectangle
{
	int width=5,height=6;
	public:
	friend void display(rectangle,square); //Callong Friend function

};
class square
{
	int side=9;
	public:
	friend void display(rectangle,square);
};
void display(rectangle r,square s)
{
	cout<<"Rectangle:"<<r.width*r.height;
	cout<<"Square"<<s.side*s.side;
}
int main()
{
	rectangle rec;
	square sq;
	display(rec,sq);
	return 0;
}
*/




//Same work but different example and program
/*
class XYZ;
class ABC
{
	int numA;
	public:
	void set(int x)
	{
		numA=x;
		
	}
	friend int add(ABC,XYZ);
};
class XYZ
{
	int numB;
	public:
	void set(int x){
	numB=x;
	
	}
	friend int add(ABC,XYZ)
	
};
int add(ABC,objA,XYZ,objB)
{
	return (objA.numA+objB.numB);
}
int main()
{
	ABC objA;
	XYZ objB;
	objA.set(1);
	objB.set(3);
	cout<<add(objA,objB);
	return 0;
	
}
*/














