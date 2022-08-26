#include <iostream>
using namespace std;
void prime_no(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            cout << "Prime Number\n";
            break;
        }
        else
        {
            cout << "Not Prime Number\n";
            break;
        }
    }

    return;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a number: \n";
    cin >> num;
    prime_no(num);
    return 0;
}