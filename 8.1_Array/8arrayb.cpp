//inpuIntumbers ,store in array and display in actual as wel as reverse order
#include<iostream>
using namespace std;
int main()
{
    int num[5],j = 1;
    for (int i = 0; i < 5; i++,j++)
    {
        cout<<"Enter number "<<j<<":";
        cin>>num[i];
    }
    cout<<"The numbers in actual order are:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<num[i]<<' '; 
    }

    cout<<"\nThe numbers in reverse order are :"<<endl;
    for (int i = 4; i >= 0; i--)
    {
        cout<<num[i]<<' ';
    }
    
    
    
    return 0;
}