//Initialize array ,input a number and search the number in array using linear search   
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,290,300};
    int n,loc = -1;
    cout<<"Enter the value to find:"<<endl;
    cin>>n;
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == n)
        {
            loc = i;    
        }
    }
    if (loc == -1)
    {
        cout<<"Value not found in the array"<<endl; 
    }
    else
    {
        cout<<"Value found at index "<<loc<<endl;
    }
    
    
    return 0;
}