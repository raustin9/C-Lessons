/*
       Vectors

Vectors are so nice, like literally the nicest thing of all time

IMPORTANT NOTE: you must have a #include <vector> at the top of your program to use vectors

All you need to know about vectors to understand what they are is that 
they are arrays that can change size, and that makes them so convenient.

Here are the main methods that you need to know to use vectors properly:
 - push_back(element)   -  this appends the element in the parentheses to the back of the vector
 - pop_back()           -  this deletes the last element of the vector and reduces its side by 1
 - .size()              -  returns the size of the vector
 - .insert(index, val)  -  inserts an element at an index of a vector. DO NOT USE THIS. IT IS INCREDIBLY INEFFICIENT

Here is how to declare a vector:
vector <type> name;

the type is always in the <> and it is the data type that you want your vector to hold.
To declare a vector of integers, you would do:
vector <int> int_vector;

Here is an example program of how vectors can be used
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> v;
  for (int i = 0; i < 100; i++) {
    v.push_back(i);
    cout << v[i] << endl;
  }
  for (int i = 0; i < v.size(); i++) {
    v.pop_back();
  }
  return 0;
}

/*
This program uses all of the main methods of a vector except for .insert() because its sucks and is retarded to have for a vector

The first for loop pushes the numbers 0-99 into the vector and outputs them
The second for loop then goes through the vector (now 100 elements) and deletes them

See? Its really simple. They are a really nice tool that you can use and can make your life a lot easier.
*/ 
