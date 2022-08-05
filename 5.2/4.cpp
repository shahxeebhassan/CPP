//Program to pring positive digits from right to left
#include<iostream>
using namespace std;
int main()
{
    int n,lastdig;
    cout<<"Enter a number"<<endl;
    cin>>n;

    while (n>0)
    {
        lastdig = n % 10;
        cout<<lastdig;
        n/=10;
    }
    
    return 0;
}