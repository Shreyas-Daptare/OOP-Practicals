#include<iostream>
using namespace std;
int main()
{
	int a[5]={11,22,33,44,55};
	int size=5;
	int ele;
	int flag=0;
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\n Enter element to be searched: ";
	cin>>ele;
	for(int i=0;i<size;i++)
	{
		if(a[i]==ele)
		{
			cout<<"element found at: "<<i+1;
			flag++;
			break; 
		}
	}
	if(flag == 0)
		cout<<"Element not found";
return 0;
}
			
