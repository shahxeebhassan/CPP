//Input ten numbers,store in array and print max numbers
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int max,min,j = 1;
    for (int i = 0; i < 10; i++,j++)
    {
        cout<<"Enter number "<<j<<endl;
        cin>>arr[i];
    }
    max = arr[0];
    min = arr[9];
    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    
    cout<<"Maximum number is "<<max<<endl;
    cout<<"Minimum number is "<<min<<endl;
    return 0;
}