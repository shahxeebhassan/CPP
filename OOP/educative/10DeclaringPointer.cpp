#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int age = 21;
	int *p;  //declaring pointer
	p = &age; //storing address of age variable
	cout<<p<<endl; //printing memory address
	cout<<*p<<endl; //printing value of age
	*p=19; //updating age
	cout<<*p<<endl; 
	
	
	int arr[3]={1,2,3};
	int *pp=arr; //
	cout<<*pp<<endl;
	cout<<*(pp+1)<<endl;
	cout<<*(pp+2)<<endl;
	*(pp+2) = 5;
	cout<<*(pp+2)<<endl;
}
