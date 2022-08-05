//input numbers and store in array , print average and sum of numbers
#include<iostream>
using namespace std;
int main()
{
    int n,j,sum;
    float average;
    cout<<"Enter the number of values you want to give:"<<endl;
    cin>>n;
    int array [n];
    j = 1;
    sum = 0;
    for (int i = 0; i < n; i++,j++)
    {
        cout<<"Enter value "<<j<<endl;
        cin>>array[i];
        sum+= array[i];
    }
    cout<<"The sum is"<<sum<<endl;
    average = sum/n;
    cout<<"The average is "<<average<<endl;
    return 0;
}