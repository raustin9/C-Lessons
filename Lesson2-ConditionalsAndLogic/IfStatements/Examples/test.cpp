// Welcome whoever is reading
// Below is a shell of a program that creates a random integer, t
// I want you to create a program using if, else, and else if, statements
// that will print out whether the number is even and/or less than 50 and/or greater than 70
// I will have a correct program that will have the correct output that you can use to see if 
// yours is working correctly
//
// Here is some examples:
//
// t = 40 -> print out "even" and "less than 50"
// t = 70 -> print out "even" and "greater than 70"
// t = 81 -> print out "greater than 70"
//
// Remember when to use multiple if statements in a row vs 'else if' statements
//
// compile with
// g++ test.cpp -o test
// and run with
// ./test
//
// The correct output will be in the program solution and IF YOU MUST you can look
// at the source code for the solution in solution.cpp. 
// ONLY DO THIS IF YOU ARE ABSOLUTELY STUCK

#include <iostream>
#include <random>
#include <limits>
using namespace std;

int main() {
  int t, seed;

  /* This section creates a random number and puts it into t
     Basically, t is going to be a random number          */
  // seed = 0xa4b99ff;
  cout << "Enter a number: ";
  cin >> seed;
  while(!cin) {
    cout << "Bro fr it is not hard to enter an integer\nEnter a number: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> seed;
   }
  

  default_random_engine rng(seed);
  uniform_int_distribution<int> rand_int(1,100);
  t = rand_int(rng);

  cout << "Random number is " << t << endl;

  /* 
     I want you to create some if statements that determine if 
     t is going to be even and/or less than 50
     tip: to find if a number is even, look back at the modulo 
     operator from a while back                             
     Also, remember when to use "else if" statements vs a series of 
     "if" statements. The specifics of your task will be at the top 
      of the file                                                
  */
  
  // write your code here

  return 0;
}
