//Find factorial of two numbers
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,fact_1,fact_2;
    cin>>n1>>n2;
    fact_1 = 1;
    for (int i = 2; i < n1; i++)
    {
        fact_1*=i;
    }

    fact_2 = 1;
    for (int i = 2; i < n2; i++)
    {
        fact_2 *= i;
    }
    cout<<fact_1<<endl;
    cout<<fact_2<<endl;
    
    return 0;
}