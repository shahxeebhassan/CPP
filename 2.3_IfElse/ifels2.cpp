// Check even odd also tell prime and non-prime
// Bare minded
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number\n";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is even\n";
    }
    else
    {
        cout << num << " is odd\n";
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i != 0)
        {
            cout << num << " is prime number\n";
            break;
        }
        else
        {
            cout<<num<<" is non-prime number\n";
            break;
        }
        
    }
    return 0;
}