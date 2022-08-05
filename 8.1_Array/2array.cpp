//input array of size n and print minNoimun and mazimun
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int array [n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter value"<<i<<endl;
        cin>>array[i];
    }
    int maxNo,minNo;
    maxNo = INT_MIN;
    minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (array[i] > maxNo)
        // {
        //     maxNo = array[i];
        // }

        maxNo = max(maxNo,array[i]);
        // if (array[i] < minNo)
        // {
        //     minNo = array[i];
        // }
        minNo = min(minNo,array[i]);
        
    }
    cout<<maxNo<<endl;
    cout<<minNo<<endl;
    
    return 0;
}