#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    //1)      INT

    //size of int

    int a; // variable declaration
    a = 3000;
    cout<<"size of int\n"<<sizeof(a)<<endl;
    
    // range of int 
    int z;
    z = pow(2,32);
    cout<<"The positive range of int is  0-"<<z-1<<endl;

    // SIZE OF FLOAT 
    float b;
    b = 120.1;
    cout<<"size of float\n"<<sizeof(b)<<endl;

    //size of string
    string str = "asd";
    cout<<"size of string\n"<<sizeof(str)<<endl;
    // size of char 
    char c;
    c = 's';
    cout<<"Size of char\n"<<sizeof(c)<<endl;

    // size of  bool
    bool d;
    cout<<"Size of bool\n"<<sizeof(d)<<endl;

    // size of  double
    double e;
    cout<<"Size of double\n"<<sizeof(e)<<endl;

    // Data modifiers
    short int sh;
    long int lo;
    cout<<"Size of short\n"<<sizeof(sh)<<endl;
    cout<<"Size of long\n"<<sizeof(lo)<<endl;





    return 0;

}