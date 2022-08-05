//Take input of quantity and price of product bought ,if value > 1000,it gives discount of 10%
#include<iostream>
using namespace std;
int main()
{
    int price,quantity,total;
    cout<<"Enter price of the product:"<<endl;
    cin>>price;
    cout<<"Enter quantity of product:"<<endl;
    cin>>quantity;
    total= quantity * price;

    if (total > 1000)
    {
        cout<<"The due amount is "<<total-(total*.1)<<endl;
    }
    else
    {
        cout<<"Total cost is "<<total<<endl;
    }
    
    return 0;
}