//print table of inputed number
#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    c = 1;
    while (c <= 10)
    {
        cout<<n<<"*"<<c<<"="<<n*c<<endl;
        c++;
    }
    
    return 0;
}