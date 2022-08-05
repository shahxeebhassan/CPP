//Revrse a number not print in reverse order
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a num:"<<endl;
    cin>>n;

    int reverse = 0;
    while (n > 0)
    {
        int lastdig =n % 10;
        reverse = reverse * 10 + lastdig;
        n = n/10;
    }
    cout<<reverse<<endl;
    return 0;
}