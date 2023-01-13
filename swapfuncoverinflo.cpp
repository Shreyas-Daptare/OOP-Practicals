#include<iostream>
using namespace std;
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"\nInteger values after swapping are:"<<a<<" "<<b;
}
void swap(float x,float y)
{
float temp1=x;
x=y;
y=temp1;
cout<<"\nFloat values after swapping are:"<<x<<" "<<y;
}
int main()
{
swap(10,20);
float a=10.15;
float b=20.25;
swap(a,b);
//swap(10.15f,20.25f) can also be used without declaration of float varibles
return 0;
}