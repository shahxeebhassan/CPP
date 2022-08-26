//Print prime numbers bw 2 num
#include<iostream>
#include<math.h>
using namespace std;
bool prime_no(int num){
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num%i == 0)
        {
            return false;
        }
        
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"Enter two numbers: \n";
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        if (prime_no(i))
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}
