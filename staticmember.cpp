#include<iostream>
using namespace std;
class A
{
    public:
    static int count;
    A()
    {
        cout<<"\nConstructor Called, Static Variable Incremented";
        count++;
    }
};
int A::count=0;
int main()
{
    A a1;
    A a2;
    A a3;
    cout<<"\nCount= "<<A::count;
    return 0;
}