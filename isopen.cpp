#include<iostream>
#include<fstream>
using namespace std;
  int main()
  {
	char c;
  	ifstream file;
  	file.open("emp.txt");
	if(file.is_open()==false)
  	{
  		cout<<"file can't be opened";
	  }
	  else
	  {
	  	cout<<"file opened\n\n";
		cout<<"File contents\n";
		while(file.get(c))
		{
			cout<<c;
		  }
	  }
	  file.close();
	  return 0;
  }
