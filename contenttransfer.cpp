#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char c;

	ifstream file1;
	file1.open("ABC.txt");
	
	ofstream file2;
	file2.open("XYZ.txt");

	while(file1.get(c))
	{
		file2<<c;
	}
	file1.close();
	file2.close();
	
	return 0;
}
