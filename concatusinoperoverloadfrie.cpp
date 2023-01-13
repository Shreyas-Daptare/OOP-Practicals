#include<iostream>
#include<string.h>
using namespace std;
class B;
class A
{
    char s1[20];
    public:
    A()
    {
        cout<<"\nEnter String1: ";
        cin.getline(s1,sizeof(s1));
    }
    friend void operator +(A,B);
};
class B
{
    char s2[20];
    public:
    B()
    {
        cout<<"\nEnter String1: ";
        cin.getline(s2,sizeof(s2));
    }
    friend void operator +(A,B);
};
void operator +(A a,B b)
{
    cout<<strcat(a.s1,b.s2);
}
int main()
{
    A a1;
    B b1;
    a1+b1;
    return 0;
}