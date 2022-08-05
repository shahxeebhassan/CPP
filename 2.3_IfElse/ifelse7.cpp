//
#include<iostream>
using namespace std;
int main()
{
    int service,salary,bonus;
    cout<<"Enter your years of service:"<<endl;
    cin>>service;
    cout<<"Enter your salary in pkr:"<<endl;
    cin>>salary;

    bonus= salary+(salary*.05);

    if (service > 5)
    {
        cout<<"You are eligible for bonus of 5%."<<"Your total salary now is "<<bonus<<endl;
    }
    else
    {
        cout<<"You are not eligible for bonus."<<"Your salary is "<<salary<<endl;
    }
    
    return 0;
}