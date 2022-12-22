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
	friend void operator-(A);
};
void operator-(A a1)
{
a1.len=strlen(a1.str);
cout<<"String length is: "<<a1.len;
}
int main()
{
	A a1;
	-a1;
	return 0;
}
