#include <iostream>
using namespace std;

int compare(char *str1, char *str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0' && *str2 == '\0')
			return 0;
		str1++;
		str2++;
	}	

	return 1;
}

int main()
{
	// Declare and Initialize two strings
	char str1[20];
	char str2[20];
	
	cout<<"Enter a string: ";
	cin.getline(str1,20);
	
	cout<<"Enter a string: ";
	cin.getline(str2,20);
	int temp=compare(str1, str2);
	if (temp == 0)
		cout << str1 << " " << str2 << " are Equal";
	else
		cout << str1 << " " << str2 << " are not Equal";
}

