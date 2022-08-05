//decimal to binary converter
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n; 
    do
    {
        cout<<n % 2;
    } while (n / 2 != 0);
    
    
    
    
    
    return 0;
}