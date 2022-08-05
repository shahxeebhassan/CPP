// Program which takes input int and sum all the numbers which it gets e.g for 4 it gives 10
// Ques1. Program to find sum of natural numbers till n.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number:"<<endl;
    cin>>n;"\n";
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout<<sum<<endl;
    return 0;
}