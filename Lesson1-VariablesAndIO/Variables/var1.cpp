#include <iostream>
using namespace std;
int main() {
	int age;             /* Not given an initial value, so it could be anything                                                                                */
	int date = 0;        /* This IS given an initial value of 0, so we know its value before we do anything important with it                                  */
	string name;         /* A string variable with initial value of an empty string ""                                                                         */
	char letter;         /* Declared but uninitialized char variable. Its value could be anything and we cannot predict it                                     */
	char letter2 = 'A';  /* Declared and initialized char variable. Note that I gave it a value of a character despite it holding a number. More on this later */
	return 0;
}