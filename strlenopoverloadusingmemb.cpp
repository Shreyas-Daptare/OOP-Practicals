#include<iostream>
#include<string.h>
using namespace std;
class A
{
public:
	int len;
	char str[20];
	A()
	{
	cout<<"Enter string: ";
	cin.getline(str,20);
	}
	void operator-()
	{
	len=strlen(str);
	cout<<"String length is: "<<len;
	}
};
int main()
{
	A a1;
	-a1;
	return 0;
}
