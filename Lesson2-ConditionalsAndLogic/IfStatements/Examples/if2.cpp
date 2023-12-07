#include <iostream>
#include <cstdio>
#include <limits>
using namespace std;

int main() {
  int t, s;
  t = 0;
  s = -1;
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
    }
    if (t < s and s != -1 and t != -1) {
      printf("%d is less than your previous number %d\n", t, s);
    } else if (t == s and s != -1 and t != -1) {
      printf("You entered %d again\n", t);
    } else if (t > s and s != -1 and t != -1) {
      printf("%d is less than your previous number %d\n", t, s);
    } else if (s == -1 and t != -1) {
      printf("You entered %d\n", t);
    } else {
      break;
    }
    s = t;
  }
}
