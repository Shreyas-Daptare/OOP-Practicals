#include<iostream>
using namespace std;
class A
{
	public:
		int a=5;
};
class B:public A
{
	public:
		int b=10;
};
class C:public B
{
	public:
	void display()
	{
		cout<<"Addition is: "<<a+b;
	}
};
int main()
{
	C c1;
	c1.display();
	return 0;
}
