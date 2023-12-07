/* IO1.cpp */
#include <iostream>
using namespace std;

int main() {
  /* Variables */
  string name;
  string age;
  /* IO */
  cout << "What is your name: ";                                 /* Displays text to terminal                                                    */
  cin >> name;                                                   /* Reads in information from user into name variables                           */
  cout << "Cool, but I don't remember asking\n";
  cout << "How old are you: ";
  cin >> age;
  cout << "Hi " << name << " you are " << age << " years old\n"; /* Displays text to the screen alongside the variables that the user input into */
  return 0;
}
