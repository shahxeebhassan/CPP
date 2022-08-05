//Program to check which no is greatest
//Bare minded
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter three numbers:"<<endl;
    cin>>n1>>n2>>n3;
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout<<n1<<" is greatest\n";
        }
    }
    else{
        if (n2 > n3)
        {
            cout<<n2<<" is greatest\n";
        }
        else
        {
            cout<<n3<<" is greatest\n";
        }
    }
    
    return 0;
}