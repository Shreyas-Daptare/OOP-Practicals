#include<iostream>
using namespace std;
int main()
{
	int a[5]={11,22,33,44,55};
	int size=5;
	for(int i=0;i<size;i++)
		cout<<*(a+i)<<"\t";
	return 0;
}
