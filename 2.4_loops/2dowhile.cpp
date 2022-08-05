//Input two num, display result of 1st num raised to the power of 2nd
//BM
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,result,counter;
    cout<<"Enter 1st num:\n";
    cin>>n1;
    cout<<"Enter 2nd num:\n";
    cin>>n2;
    result = 1;
    counter = 0;
    do
    {
        result *= n1;
        counter++;
    } while (counter != n2);
    cout<<result<<endl;
    return 0;
}