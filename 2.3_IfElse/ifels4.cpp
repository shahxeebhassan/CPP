//Chech if it is alphabet or vowel
//Bare minded
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter an alphabet:\n";
    cin>>ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout<<ch<<" is a vowel\n";
    }
    else
    {
        cout<<ch<<" is a consonant\n";
    }
    
    return 0;
}