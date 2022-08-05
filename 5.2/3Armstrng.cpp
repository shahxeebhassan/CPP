////To check Armstrong no
//----> If we take cube of all digits of a number and cube of all digits,the result is the same number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,n1;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    n1 = n;
    int armstrong = 0; 
    while (n > 0)
    {
        int lastdig = n % 10;
        // int mul= lastdig * lastdig * lastdig;
        // armstrong = armstrong + mul;
        armstrong+=pow(lastdig,3);
        n = n / 10;
    }
    if (armstrong == n1)
    {
        cout<<n1<<" is an armstrong number"<<endl;
    }
    else
    {
        cout<<n1<<" is not an armstrong number"<<endl;
    }
    
    return 0;
}