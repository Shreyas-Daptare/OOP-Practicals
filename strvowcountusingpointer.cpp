#include <iostream>
using namespace std;

int main() 
{
	char string1[20], *pString1;
	int vow=0;
	cout << "Enter the first string: ";
	cin.getline(string1,20);
	pString1 = string1;
	while(*pString1 != '\0')
	{
		if (*pString1=='a' || *pString1=='A' || *pString1=='e' || *pString1=='E' || *pString1=='i' || *pString1=='I' || *pString1=='o' || *pString1=='O' || *pString1=='u' || *pString1=='U')
		{
		vow++; 
		}
		pString1++;
	}
	cout <<" Vowels: "<<vow;
	return 0;
}
