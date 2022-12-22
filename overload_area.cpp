#include<iostream>
using namespace std;

class cal_area
{
	public:
		void area(float b,float h)
		{
			cout<<"Area of Triangle is: "<<(1/2)*b*h<<endl;
		}
		void area(int side)
		{
			cout<<"Area of Square: "<<side*side<<endl;
		}
		void area(float r)
		{
			cout<<"Area of Circle: "<<3.14*(r**2);
		}
};	
int main()
{
	


