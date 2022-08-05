//Function to add 2 numbers
#include<iostream>
using namespace std;

//  This method is called function prototype

int sum(int n1, int n2);
int main()
{
    int a,b;
    cout<<"Enter num 1:"<<endl;
    cin>>a;
    cout<<"Enter num 2:"<<endl;
    cin>>b;
    // a and b are actual parameters
    cout<<"The result is "<<sum(a,b)<<endl;
    return 0;
}
int sum(int n1, int n2)
{
    // formal parameters an1 and n2 will b taking values from actual parameters
    int result = n1 + n2;
    return result;
}