#include<iostream>
using namespace std;
class A
{
	public:
		int a=5;
		int b=10;
};
class B:public A
{
	public:
	void display()
	{
		cout<<"Addition is: "<<a+b;
	}
};
int main()
{
	B b1;
	b1.display();
	return 0;
}

