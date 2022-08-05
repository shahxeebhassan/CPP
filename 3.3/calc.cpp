// Arithmetic Calculator
#include <iostream>
using namespace std;
int main()
{
    cout << "Welcome to Arithmetic calculator" << endl;

    string help;
    string calculation_asking;
    cout << "\n***********************************************************\n                      \n"
         << "  Type 'yes' to get help and 'no' to proceed to calculations:\n"
         << "                       \n***********************************************************\n " << endl;
    cin >> help;
    "]\n";
    int n1, n2;
    char op;
    if (help == "yes")
    {
        cout << "\n#######################\n                       \nThe calculator has basically 5 Arithmetic Operators" << endl
             << "1)'+' OR Addition  " << endl
             << "2)'-' OR Subtraction " << endl
             << "3)'*' OR Multiplication  " << endl
             << "4)'/' OR Division " << endl
             << "5)'%' OR Remainder " << endl;
        cout << "\n******************************************\n                      \n"
             << "  Enter yes to proceed to calculations:"
             << "\n                       \n******************************************\n \n";
        cin >> calculation_asking;

        if (calculation_asking == "yes")
        {
            cout << "\n#######################\n                       \nEnter Value 1:" << endl;
            cin >> n1;
            cout << "Enter Operator:" << endl;
            cin >> op;
            cout << "Enter Value 2:" << endl;
            cin >> n2;

            if (op == '+')
            {
                cout << "\n#######################\n  The answer is " << n1 + n2 << "\n#######################\n"
                     << endl;
            }
            else if (op == '-')
            {
                cout << n1 - n2 << endl;
            }
            else if (op == '/')
            {
                cout << "\n#######################\n  The answer is " << (float)n1 / n2 << "\n#######################\n"
                     << endl;
            }
            else if (op == '*')
            {
                cout << "\n#######################\n  The answer is " << n1 * n2 << "\n#######################\n"
                     << endl;
            }
            else if (op == '%')
            {
                cout << "\n#######################\n  The answer is " << n1 % n2 << "\n#######################\n"
                     << endl;
            }
            else
            {
                cout << "Invalid Operator" << endl;
            }
        }

        else
        {
            cout << "Thanks for using Arithmetic Calculator" << endl;
        }
    }
    else
    {
        cout << "Enter value 1:" << endl;
        cin >> n1;
        cout << "Give Operator" << endl;
        cin >> op;
        cout << "Enter value 2:" << endl;
        cin >> n2;

        if (op == '+')
        {
            cout << "\n#######################\n  The answer is " << n1 + n2 << "\n#######################\n"
                 << endl;
        }
        else if (op == '-')
        {
            cout << "\n#######################\n  The answer is " << n1 - n2 << "\n#######################\n"
                 << endl;
        }
        else if (op == '/')
        {
            cout << "\n#######################\n  The answer is " << (float)n1 / n2 << "\n#######################\n"
                 << endl;
        }
        else if (op == '*')
        {
            cout << "\n#######################\n  The answer is " << n1 * n2 << "\n#######################\n"
                 << endl;
        }
        else if (op == '%')
        {
            cout << "\n#######################\n  The answer is " << n1 % n2 << "\n#######################\n"
                 << endl;
        }
        else
        {
            cout << "Invalid Operator" << endl;
        }
    }
    return 0;
}