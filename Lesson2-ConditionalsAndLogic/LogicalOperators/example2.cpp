#include <iostream>
using namespace std;

/* This should output true */
int main() {
  if (true && !(false)) cout << "true";
  else cout << "false";
  return 0;
}
