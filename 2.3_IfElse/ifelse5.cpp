//Check if shape is square or not
//Bare minded
#include<iostream>
using namespace std;
int main()
{
    int length,width;
    cout<<"Enter width of the shape\n";
    cin>>width;
    cout<<"Enter length of the shape\n";
    cin>>length;
    if (length == width)
    {
        cout<<"It is a square\n";
    }
    else{
        cout<<"It is not a square\n";
    }
    
    return 0;
}