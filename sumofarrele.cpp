#include<iostream>
using namespace std;
#define MAX 100
int main()
{
    int n,sum=0;
    int arr[MAX];
    cout<<"Enter Size of array: ";
    cin>>n;
    cout<<"Enter Array Elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum of Array elements is: "<<sum;
    return 0;
}