// Calculator
#include <iostream>
using namespace std;
int main()
{
    char Op;
    int n1, n2;
    cout << "Enter num 1:" << endl;
    cin >> n1;
    cout << "Enter Operator(+ , - , * , / %)" << endl;
    cin >> Op;
    cout << "Enter num 2:" << endl;
    cin >> n2;
    switch (Op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    default:
        cout<<"Enter valid Operator"<<endl;
        break;
    }
    return 0;
}