// Use of goto 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if (n % 2 == 0)
    {
        goto label1;
    }
    else
    {
        goto label2;
    }
    
    label1:
        cout<<"Even"<<endl;
    label2:
        cout<<"odd"<<endl;
    return 0;
}