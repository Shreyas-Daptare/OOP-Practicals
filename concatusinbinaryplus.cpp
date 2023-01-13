#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    char s1[20];
    A()
    {
        cout<<"Enter String1: ";
        cin.getline(s1,sizeof(s1));
        fflush(stdin);
    }
    void operator +(A a)
    {
        cout<<"Concateneted String: " << strcat(s1,a.s1);
    }
};
int main()
{
    A a1;
    A a2;
    a1+a2;
    return 0;
}