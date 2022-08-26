#include<iostream>
using namespace std;

int calculateSum(int p1, int p2){
  int sum = p1 + p2;
  return sum;
}

int main() {
  int p1,p2;
  cout<<"Enter number 1: \n";
  cin>>p1;
  cout<<"Enter number 2: \n";
  cin>>p2;
  
  cout<<calculateSum(p1,p2)<<endl;  // calculates sum of given numbers
  return 0;
}
