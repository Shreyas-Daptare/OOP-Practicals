#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    int b;
    A()
    {
        cout<<"Enter the values of A and B";
        cin>>a>>b;
    }
    void operator -()
    {
        a=-a;
        b=-b;
    }
    void display()
    {
        cout<<"A: "<<a<<"\nB: "<<b;
    }
};
int main()
{
    A a1;
    -a1;
    a1.display();
    return 0;
}