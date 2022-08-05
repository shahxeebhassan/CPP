//input table number and length to print table
#include<iostream>
using namespace std;
int main()
{
    int num,len;
    cout<<"Enter the number to print its table:"<<endl;
    cin>>num;
    cout<<"Enter the length of table:"<<endl;
    cin>>len;
    for (int i = 1; i <= len; i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    
    return 0;
}