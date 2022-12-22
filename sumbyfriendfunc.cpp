#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
		A()
		{
			cout<<"Enter Number: ";
			cin>>a; 
			cout<<"Enter Number: ";
			cin>>b;
		}
		friend void sum(A);
};
void sum(A t1)
{
	cout<<"Sum is: "<<t1.a+t1.b;
}
int main()
{
A a1;
sum(a1);
return 0;
}
