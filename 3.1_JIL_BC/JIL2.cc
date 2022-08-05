// Program to check if a given number is prime or not.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    "\n";
    int s;
    for (s = 2; s < num; s++)
    {
        if (num % s == 0)
        {
            cout << num << " is not a Prime Number" << endl;
            break;
        }
    }
    if(s==num){
        cout<<num<<" is a prime number"<<endl;
    }
    return 0;
}