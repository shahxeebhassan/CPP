//To print memory Location
#include<iostream>
using namespace std;
int main()
{
    //In CPP memory loc of variable is created instead of number 
    int n1,n2,n3,n5,n4,n6;
    n1 = 10;
    n2 = 10;
    n3 = 15;
    n4 = 32000;
    n5 = -32000;
    n6 = 7000;
    cout<<&n1<<endl;
    cout<<&n2<<endl;
    cout<<&n3<<endl;
    cout<<&n4<<endl;
    cout<<&n5<<endl;
    cout<<&n6<<endl;

    return 0;
}