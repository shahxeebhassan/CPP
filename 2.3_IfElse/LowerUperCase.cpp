//check lower and upper case alphabet
#include <iostream>
using namespace std;
int main()
{
    char alphbt;
    int LowerCase, UpperCase;
    cout<<"Enter an alphabet:"<<endl;
    cin>>alphbt;



    if (alphbt >='A' && alphbt <= 'Z')
    {
        cout<<"Upper Case"<<endl;
    }
    else if (alphbt >= 'a' && alphbt <= 'z')
    {
        cout<<"Lower Case:"<<endl;
    }
    
    else
    {
        cout<<"Invalid Character"<<endl;
    }
    
    return 0;
}