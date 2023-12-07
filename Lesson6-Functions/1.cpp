/*
 * This program has a function called add_two_numbers that 
 * returns that value of its parameters added together.
 * This program will take in two numbers for input and 
 * output them added together since it calls the function
 */

#include <iostream>
using namespace std;

int add_two_numbers(int a, int b) {
  return a + b;
}

int main() {
  int x,y,z;
  cin >> x >> y;
  z = add_two_numbers(x,y);
  cout << z << endl;
  return 0;
}
