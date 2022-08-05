//******************************************************************************
// Mega Calculator
//******************************************************************************
#include <iostream>
using namespace std;
int main()
{
    char main_choice, Reuse_1;
    long long n1, n2;
    char opr, unit_1, unit_2;
No:
    cout << "Enter your selection(1-4):\n1:Arithmetic Calculator\n2:Digital Storage Converter\n3:Temperature Converter\n4:Close Calculator\n";
    cin >> main_choice;
    // Main switch ---- Program Starts
    switch (main_choice)
    {
        // Arithmetic Calculator
    case '1':
    Yes:
        cout << "Enter first number: ";
        cin >> n1;
        cout << "Enter operator (+,-,*,/,%): ";
        cin >> opr;
        cout << "Enter second number: ";
        cin >> n2;
        switch (opr)
        {
        case '+':
            cout << "Answer = " << n1 + n2 << endl;
            cout << "Do you want to use it again?(y/n)";
            cin >> Reuse_1;
            if (Reuse_1 == 'y' || Reuse_1 == 'Y')
            {
                goto Yes;
            }
            else if (Reuse_1 == 'n' || Reuse_1 == 'N')
            {
                goto No;
            }
            break;
        case '-':
            cout << "Answer = " << n1 - n2 << endl;
            cout << "Do you want to use it again?(y/n)";
            cin >> Reuse_1;
            if (Reuse_1 == 'y' || Reuse_1 == 'Y')
            {
                goto Yes;
            }
            else if (Reuse_1 == 'n' || Reuse_1 == 'N')
            {
                goto No;
            }
            break;
        case '*':
            cout << "Answer = " << n1 * n2 << endl;
            cout << "Do you want to use it again?(y/n)";
            cin >> Reuse_1;
            if (Reuse_1 == 'y' || Reuse_1 == 'Y')
            {
                goto Yes;
            }
            else if (Reuse_1 == 'n' || Reuse_1 == 'N')
            {
                goto No;
            }
            break;
        case '/':
            cout << "Answer = " << n1 / n2 << endl;
            cout << "Do you want to use it again?(y/n)";
            cin >> Reuse_1;
            if (Reuse_1 == 'y' || Reuse_1 == 'Y')
            {
                goto Yes;
            }
            else if (Reuse_1 == 'n' || Reuse_1 == 'N')
            {
                goto No;
            }
            break;
        default:
            cout << "Error!" << endl
                 << "Enter a valid operator (+,-,*,/)" << endl;
        }
        break;
        ///////// Storage Convertor
    case '2':
        cout << "Convert data from(1-5):\n1:PetaByte(PB)\n2:TeraByte(TB)\n3:GigaByte(GB)\n4:MegaByte(MB)\n5:KiloByte(KB)\n6:Byte\n";
        cin >> unit_1;
        cout << "Convert data to(1-6):\n1:TeraByte(TB)\n2:GigaByte(GB)\n3:MegaByte(MB)\n4:KiloByte(KB)\n5:Byte\n6:Bit\n";
        cin >> unit_2;
        cout << "Enter value of data:";
        cin >> n1;
        if (unit_1 == '1' && unit_2 == '1')
        {
            n2 = n1 * 1000;
            cout << n1 << " PB = " << n2 << " TB" << endl;
        }
        else if (unit_1 == '1' && unit_2 == '2')
        {
            n2 = n1 * 1000 * 1000;
            cout << n1 << " PB = " << n2 << " GB" << endl;
        }
        else if (unit_1 == '1' && unit_2 == '3')
        {
            n2 = n1 * 1000 * 1000 * 1000;
            cout << n1 << " PB = " << n2 << " MB" << endl;
        }
        else if (unit_1 == '1' && unit_2 == '4')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 1000;
            cout << n1 << " PB = " << n2 << " KB" << endl;
        }
        else if (unit_1 == '1' && unit_2 == '5')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 1000 * 1000;
            cout << n1 << " PB = " << n2 << " Bytes" << endl;
        }
        else if (unit_1 == '1' && unit_2 == '6')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 1000 * 1000 * 8 ;
            cout << n1 << " PB = " << n2 << " Bits"<< endl;
        }
        else if (unit_1 == '2' && unit_2 == '2')
        {
            n2 = n1 * 1000;
            cout << n1 << " TB = " << n2 << " GB" << endl;
        }
        else if (unit_1 == '2' && unit_2 == '3')
        {
            n2 = n1 * 1000 * 1000;
            cout << n1 << " TB = " << n2 << " MB" << endl;
        }
        else if (unit_1 == '2' && unit_2 == '4')
        {
            n2 = n1 * 1000 * 1000 * 1000;
            cout << n1 << " TB = " << n2 << " KB" << endl;
        }
        else if (unit_1 == '2' && unit_2 == '5')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 1000;
            cout << n1 << " TB = " << n2 << " Bytes" << endl;
        }
        else if (unit_1 == '2' && unit_2 == '6')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 1000 * 8;
            cout << n1 << " TB = " << n2 << " Bits" << endl;
        }
        else if (unit_1 == '3' && unit_2 == '3')
        {
            n2 = n1 * 1000;
            cout << n1 << " GB = " << n2 << " MB" << endl;
        }
        else if (unit_1 == '3' && unit_2 == '4')
        {
            n2 = n1 * 1000 * 1000;
            cout << n1 << " GB = " << n2 << " KB" << endl;
        }
        else if (unit_1 == '3' && unit_2 == '5')
        {
            n2 = n1 * 1000 * 1000 * 1000;
            cout << n1 << " GB = " << n2 << " Bytes" << endl;
        }
        else if (unit_1 == '3' && unit_2 == '6')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 8;
            cout << n1 << " GB = " << n2 << " Bits" << endl;
        }
        else if (unit_1 == '4' && unit_2 == '4')
        {
            n2 = n1 * 1000;
            cout << n1 << " MB = " << n2 << " KB" << endl;
        }
        else if (unit_1 == '4' && unit_2 == '5')
        {
            n2 = n1 * 1000 * 1000;
            cout << n1 << " MB = " << n2 << " Bytes" << endl;
        }
        else if (unit_1 == '4' && unit_2 == '6')
        {
            n2 = n1 * 1000 * 1000 * 8;
            cout << n1 << " MB = " << n2 << " Bits" << endl;
        }
        else if (unit_1 == '5' && unit_2 == '5')
        {
            n2 = n1 * 1000;
            cout << n1 << " KB = " << n2 << " Bytes" << endl;
        }
        else if (unit_1 == '5' && unit_2 == '6')
        {
            n2 = n1 * 1000 * 8;
            cout << n1 << " KB = " << n2 << " Bits" << endl;
        }
        else if (unit_1 == '6' && unit_2 == '6')
        {
            n2 = n1 * 8;
            cout << n1 << " Bytes = " << n2 << " Bits" << endl;
        }
        break;
    case '3':

        break;
    case '4':
        return 0;
        break;
    default:
        break;
    }
    return 0;
}