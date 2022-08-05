//Product of odd numbers till n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:\n";
    cin>>n;
    int result = 1;
    for (int i = 1; i <= n; i+=2)
    {
        result*=i;
    }
    cout<<result<<endl;
    
    return 0;
}