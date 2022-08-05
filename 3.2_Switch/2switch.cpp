//
#include <iostream>
using namespace std;
int main()
{
    char Alphbt;
    cout << "Enter an Alphabet:" << endl;
    cin >> Alphbt;
    switch (Alphbt)
    {
    case 'a':
        cout << "Vowel\n";
        break;
    case 'e':
        cout << "Vowel\n";
        break;
    case 'i':
        cout << "Vowel\n";
        break;
    case 'o':
        cout << "Vowel\n";
        break;
    case 'u':
        cout << "Vowel\n";
        break;
    default:
        cout<<"Consonant"<<endl;
        break;
    }
    return 0;
}