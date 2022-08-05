//******************************************************************************
//Rectangle Pattern     
//******************************************************************************
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter rows of rectangle:\n";
    cin>>row;
    cout<<"Enter columns of rectangle:\n";
    cin>>col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}