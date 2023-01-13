#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream i;
    i.open("sample.txt");
    int spaces=0;
    char c;
    while(i.get(c))
    {
        if(c == ' ')
        {
            spaces++;
        }
    }
    i.close();
    cout<<"Spaces are: "<<spaces;
    return 0;
}