#include<iostream>
using namespace std;
int main()
{
int arr[5];
cout<<"Enter Array Elements\n";
for(int i=0;i<5;i++)
    cin>>arr[i];
int i,j,temp;
for(i=0;i<5-1;i++)
{
    for(j=i+1;j<5;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}   
cout<<"Smallest number is: "<<arr[0];
return 0;
}