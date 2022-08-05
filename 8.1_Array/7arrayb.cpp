//Input ten numbers,store in array and print max numbers
#include<iostream>
#include<climits>   
using namespace std;
int main()
{
    int arr[10];
    int max_no = INT_MIN,min_no = INT_MAX,j = 1;
    for (int i = 0; i < 10; i++,j++)
    {
        cout<<"Enter number "<<j<<endl;
        cin>>arr[i];
        max_no = max(arr[i],max_no);
        min_no = min(arr[i],min_no);
    }
    cout<<"Maximum number is "<<max_no<<endl;
    cout<<"Minimum number is "<<min_no<<endl;
    return 0;
}