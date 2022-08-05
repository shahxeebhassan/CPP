//input age of diff peoples and count number of persons in age group 50 and 60
#include<iostream>
using namespace std;
int main()
{
    int age[150],i,n,count = 0;
    cout<<"Enter the number of persons required :"<<endl;
    cin>>n;
    cout<<"Enter the age of"<<n<<" peoples:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>age[i];
        if (age[i]>= 50 && age[i]<= 60)
        {
            count+=1;
        }
        
    }
    cout<<count<<" peoples are from 50-60 age group"<<endl;
    return 0;
}