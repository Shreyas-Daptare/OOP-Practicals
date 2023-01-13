#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char c;
    ofstream o1;
    o1.open("wtaf.txt");
    o1<<"Welcome to Poly";
    o1.close();
    ifstream i1;
    i1.open("wtaf.txt");
    while(i1.get(c))
    {
        cout<<c;
    }
    return 0;
}