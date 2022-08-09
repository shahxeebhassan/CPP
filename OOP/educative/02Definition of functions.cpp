#include <iostream>
#include <string>
using namespace std;

int sum(int num1, int num2){
  return num1 + num2;
}
string blah(){
  string s = "Hello World";
  return s;
}

void printName(string name){
  cout << name << endl;
  // No return statement needed as this is a void function
}

int main()
{
  int x = 10;
  int y = 20;
  int total = sum(x, y); // We store the returned value into a variable
  // of the corresponding type
  cout << total <<endl;

string str = blah();
  cout << str <<endl;
  
  printName("Educative");  // This is a void function, so it doesn't need to be stored
}
