//linear search
#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    
    return -1;
}


int main()
{
    int n,j = 1;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n],key;
    for (int i = 0; i < n; i++,j++)
    {
        cout<<"Enter value "<<j<<endl;
        cin>>arr[i];
    }
    cout<<"Enter Key:"<<endl;
    cin>>key;
    cout<<LinearSearch(arr,n,key)<<endl;
    return 0;
}