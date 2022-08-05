//Input number and dislpay sum of its digits
#include<iostream>
using namespace std;
int main()
{
    int x,a,r,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>x;
    a = x;
    while (x != 0)
    {
        r = x % 10;
        if (r == 0)
        {
            sum = sum;
        }
        else
        {
            sum = sum + r;
        }
        x = x / 10;
    }
    cout<<"The sum of digits of "<<a<<" = "<<sum<<endl;
    return 0;
}