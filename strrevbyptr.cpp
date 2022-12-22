#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char abc[20];
	cout<<"Enter a string: ";
	cin.getline(abc,20);
	for(int i=strlen(abc)-1;i>=0;i--)
	{
		cout<<*(abc+i);
	}
	return 0;
}
