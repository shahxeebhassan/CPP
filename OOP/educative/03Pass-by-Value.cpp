#include <iostream>
using namespace std;

int multiplyBy10(int num){
  num = num * 10;
  return num;
}

int main(){
  int x = 10;
  
  cout << "Before function call" << endl; 
  cout << "x: " << x << endl;

  // Multiplying by 10
  cout<<multiplyBy10(x)<<endl;

  cout << "After function call" << endl;
  cout << "x: " << x << endl;
}
