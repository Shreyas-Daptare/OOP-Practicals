#include<iostream>
using namespace std;
class second;
class first
{
    int x;
    public:
    void getx()
    {
        cout<<"\nEnter the value of x:";
        cin>>x;
    }
    friend void min(first,second);
};
class second
{
    int y;
    public:
    void gety()
    {
        cout<<"\nEnter the value of y:";
        cin>>y;
    }
    friend void min(first,second);
};
void min(first a,second b)
{
    if(a.x<b.y)
    {
        cout<<"\nSmallest value is:"<<a.x;
    }
    else
    {
        cout<<"\nSmallest value is:"<<b.y;
    }
}
int main()
{
first a;
second b;
a.getx();
b.gety();
min(a,b);
return 0;
}