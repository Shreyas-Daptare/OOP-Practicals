#include<iostream>
using namespace std;
class A
{
    public:
    static void add()
    {
        int a,b;
        cout<<"\nEnter a number: ";
        cin>>a;
        cout<<"Enter a number: ";
        cin>>b;
        cout<<"Addition is: "<<a+b;
    }
};
class B
{
    public:
    void callerfunc()
    {
            A::add();
    }
};
int main()
{
    A a1;
    a1.add(); //Called through the original class
    
    A::add(); //called through the main class/function
    
    B b1;
    b1.callerfunc(); //called through the class B
    return 0;
}
