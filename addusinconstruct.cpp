#include<iostream>
using namespace std;
class addition
{
    public:
    int x,y;
    addition()
    {
        cout<<"Enter 2 numbers: ";
        cin>>x>>y;
    }
    void display();
};
void addition::display()
{
    cout<<"Addition is: "<<x+y;
}
int main()
{
addition a;
a.display();
return 0;
}