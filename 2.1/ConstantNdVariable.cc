//what is variable and const
#include<iostream>
using namespace std;
int main()
{
    ///////           CONSTANT
    const int a = 10;
    // a = 1220;

    //-----> It will give error as we used const keyword

    cout<<a<<endl;



    ///////           VARIABLE
    int b = 10;
    b = 1220;

    //-----> It will not give error as we`ve not used const keyword

    cout<<b<<endl;
    return 0;
    return 0;
}