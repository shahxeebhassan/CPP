//Print reverse counting till n
//Bare minded
#include<iostream>
using namespace std;
int main()
{
    int n,i = 0;
    cout<<"Enter a number\n";
    cin>>n;
    do
    {
        cout<<n<<endl;
        n--;
    } while (i != n);
    
    return 0;
}