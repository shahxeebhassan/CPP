//******************************************************************************
// Mega Calculator
//******************************************************************************
#include <iostream>
using namespace std;
int main()
{
    char main_choice, Reuse_1, opr, unit_1, unit_2;
    long long n1, n2;

    cout << "\n\n\n\n*****   Welcome to the Calculator ---(Developed by Zaibi)   *****";
No:
    cout << "\n\n\nEnter your selection(1-4):\n1:Arithmetic Calculator\n2:Digital Storage Converter\n3:Temperature Converter\n4:Close Calculator\n\n";
    cin >> main_choice;
    // Main switch ---- Program Starts
    switch (main_choice)
    {
        // Arithmetic Calculator
    case '1':
    Yes:
        cout << "Enter first number: ";
        cin >> n1;
        cout << "Enter operator (+,-,*,/): ";
        cin >> opr;
        cout << "Enter second number: ";
        cin >> n2;
        switch (opr)
        {
        case '+':
            cout << "Answer = " << n1 + n2 << endl;
            goto reuseAC;
            break;
        case '-':
            cout << "Answer = " << n1 - n2 << endl;
            goto reuseAC;
            break;
        case '*':
            cout << "Answer = " << n1 * n2 << endl;
            goto reuseAC;
            break;
        case '/':
            cout << "Answer = " << n1 / n2 << endl;
            goto reuseAC;
            break;
        default:
            cout << "Error!" << endl
                 << "Enter a valid operator (+,-,*,/)" << endl;
        }
        break;
        ///////// Storage Convertor
    case '2':
    YesDSC:
        cout << "\n\nConvert data from(1-5):\n1:PetaByte(PB)\n2:TeraByte(TB)\n3:GigaByte(GB)\n4:MegaByte(MB)\n5:KiloByte(KB)\n6:Byte\n\n";
        cin >> unit_1;
        cout << "\n\nConvert data to(1-6):\n1:TeraByte(TB)\n2:GigaByte(GB)\n3:MegaByte(MB)\n4:KiloByte(KB)\n5:Byte\n6:Bit\n\n";
        cin >> unit_2;
        cout << "\nEnter value of data: \n\n";
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
            n2 = n1 * 1000 * 1000 * 1000 * 1000 * 1000 * 8;
            cout << n1 << " PB = " << n2 << " Bits" << endl;
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
        else
        {
            cout << "\n\nInvalid Selection\n\n";
        }

        cout << "\n\nDo you want to use it again?(y/n)\n\n";
        cin >> Reuse_1;
        if (Reuse_1 == 'y' || Reuse_1 == 'Y')
        {
            goto YesDSC;
        }
        else if (Reuse_1 == 'n' || Reuse_1 == 'N')
        {
            goto No;
        }
        break;
    case '3':
    YesTC:
        cout << "\n\nConvert temperature from(1-3):\n1:Celcius\n2:Farenheit\n3:Kelvin\n\n";
        cin >> unit_1;
        cout << "\n\nConvert temperature to(1-3):\n1:Celcius\n2:Farenheit\n3:Kelvin\n\n";
        cin >> unit_2;
        cout << "\n\nEnter temperature: \n\n";
        cin >> n1;
        if (unit_1 == '1' && unit_2 == '1')
        {
            n2 = n1;
            cout << "\n\n"
                 << n1 << " Celcius = " << n2 << " Celcius\n\n";
        }
        else if (unit_1 == '1' && unit_2 == '2')
        {
            n2 = (n1 * 1.8) + 32;
            cout << "\n\n"
                 << n1 << " Celcius = " << n2 << " Farenheit\n\n";
        }
        else if (unit_1 == '1' && unit_2 == '3')
        {
            n2 = n1 + 273.15;
            cout << "\n\n"
                 << n1 << " Celcius = " << n2 << " kelvin\n\n";
        }
        else if (unit_1 == '2' && unit_2 == '1')
        {
            n2 = (n1 - 32) * 0.555555556;
            cout << "\n\n"
                 << n1 << " Farenheit = " << n2 << " Celcius\n\n";
        }
        else if (unit_1 == '2' && unit_2 == '2')
        {
            n2 = n1;
            cout << "\n\n"
                 << n1 << " Farenheit = " << n2 << " Farenheit\n\n";
        }
        else if (unit_1 == '2' && unit_2 == '3')
        {
            n2 = (n1 - 32) * (0.555555556) + 273.15;
            cout << "\n\n"
                 << n1 << " Farenheit = " << n2 << " Kelvin\n\n";
        }
        else if (unit_1 == '3' && unit_2 == '1')
        {
            n2 = n1 - 273.15;
            cout << "\n\n"
                 << n1 << " Kelvin = " << n2 << " Celcius\n\n";
        }
        else if (unit_1 == '3' && unit_2 == '2')
        {
            n2 = (n1 - 273.15) * (1.8) + 32;
            cout << "\n\n"
                 << n1 << " Kelvin = " << n2 << " Farenheit\n\n";
        }
        else if (unit_1 == '3' && unit_2 == '3')
        {
            n2 = n1;
            cout << "\n\n"
                 << n1 << " Kelvin = " << n2 << " Kelvin\n\n";
        }
        cout << "\n\nDo you want to use it again?(y/n)\n\n";
        cin >> Reuse_1;
        if (Reuse_1 == 'y' || Reuse_1 == 'Y')
        {
            goto YesTC;
        }
        else if (Reuse_1 == 'n' || Reuse_1 == 'N')
        {
            goto No;
        }
        break;
    case '4':
        cout << "\n\nThanks for using Calculator\n\n";
        return 0;
        break;
    default:
        cout<<"\n\nInvalid Selection";
        break;
    }
reuseAC:
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
    return 0;
}