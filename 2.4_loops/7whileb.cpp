//input number and give factorial
#include<iostream>
using namespace std;
int main()
{
    long int num, factorial, counter;
    cout<<"Enter a number to get its factorial:"<<endl;
    cin>>num;
    counter = 1;
    factorial = 1;
    while (counter <= num)
    {
        factorial = counter * factorial;
        counter++;
    }
    cout<<"The factorial of "<<num<<"is "<<factorial<<endl;
    
    return 0;
}