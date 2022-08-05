//initializw array of 10 integers.Input an int and search the value using binary search
#include<iostream>
using namespace std;
int main()
{
    int arr[]= {10,20,30,40,50,60,70,80,90,100};
    int key,start,end,loc,mid;
    start = 0;
    end = 9;
    loc = -1;
    cout<<"Enter number to search"<<endl;
    cin>>key;
    while (start<=end)
    {
        mid = (start+end)/2;
        if (arr[mid] == key)
        {
            loc = mid;
            break;
        }
        else if (key < arr[mid])
        {
            end = mid -1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (loc == -1)
    {
        cout<<key<<" not found"<<endl;
    }
    else
    {
        cout<<key<<" found at index "<<loc<<endl;
    }
    
    
    
    return 0;
}