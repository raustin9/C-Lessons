#include <iostream>
#include <cstdio>
#include <limits>
using namespace std;

int main() {
  int t;
  t = 0;
  printf("Enter a number as input.\nInput -1 when you want the program to stop\n");
  while (t != -1) {
    printf("num = ");
    cin >> t;
    if (!cin) {
      printf("Enter a number retard\n");
      while (!cin) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }
    } else if (t < 5) {
      printf("The number %d is less than 5\n", t);
    } else if (t == 5) {
      printf("You entered the number 5\n");
    } else {
      printf("The number %d is greater than 5\n", t);
    }
  }
}
