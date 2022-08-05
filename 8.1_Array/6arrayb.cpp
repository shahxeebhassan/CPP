//Use 4 arrays numbers,squares,cubes,sums consisiting of user gives elements.The number stores index number,square stores square of index and cube stores cube of index.The sums stores sum of number ,cube and square.
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Give the number of elements u want array should consist of:"<<endl;
    cin>>size;
    int numbers[size],squares[size],cubes[size],sums[size],total = 0;
    //storing numbers in arrays
    for (int i = 0; i < size; i++)
    {
        numbers[i]=i;
        squares[i]=i*i;
        cubes[i] = i*i*i;
        sums[i] = numbers[i]+squares[i]+cubes[i];
    }
    // ootputs the sums array and add up all the sums 
    cout<<"Numbers:\t";
    for (int i = 0; i < size; i++)
    {
        cout<<numbers[i]<<"\t";
    }
    cout<<"\nSquares:\t";
    for (int i = 0; i < size; i++)
    {
        cout<<squares[i]<<"\t";
    }
    cout<<"\nCubes:\t";
    for (int i = 0; i < size; i++)
    {
        cout<<"\t"<<cubes[i];
    }
    cout<<"\nSums:\t";
    for (int i = 0; i < size; i++)
    {
        cout<<"\t"<<sums[i];
        total+=sums[i];
    }
    cout<<"\nGrand Total = "<<total<<endl;
    
    
    
    return 0;
}