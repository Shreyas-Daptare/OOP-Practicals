#include<iostream>
using namespace std;
class A
{
    public:
    int x=5;
    int y=10;
    virtual void add()=0;
};
class B:public A
{
    public:
    void display()
    {
        cout<<x;
        cout<<endl;
        cout<<y;
    }
    void add() override
    {
        cout<<"\nAddition is "<<x+y;
    }
};
int main()
{
    //A a1;
    B b1;
    b1.display();
    b1.add();
    return 0;
}