/*
      For loops  -  read after the section on for loops

For loops are something that you will need to get down, and eventally they will 
become second nature to you.

You should have already read the section on while loops, so you should know how while loops
work and how they run until the condition is broken.

For loops run in the same way, except they work with numbers rather than logical conditions.

Here is an example of one;
*/

#include <iostream>
using namespace std;

int main() {
  string s = "Test string";
  for (int i = 0; i < s.length(); i++) {
    cout << s[i] << endl;
  }
  return 0;
}

/*
First I am going to explain the inner condition of the for loop
1. There are 3 parts to the condition of a for loop. Each one of 
   them are separated by a semicolon
2. The first part of the for loop condition is the initialization of a variable.
   In this case, I declared a variabe "i" and initialized it to 0
3. The second part of the condition is the actual condition. Essentially, the loop will 
   continue to run until this part is not true. In this case I test to make sure that 
   i is less than the length of the string s each iteration, and it will break once it 
   reaches that length
4. The final part is the operation. This will happen at the end of every iteration, and 
   it is normally a mathematical operation on the variable that you declare in the first part.
5. Inside the {} of the for loop, this runs each time until the condition is broken. 
6. To explain what happens in the brackets, remember that you can think of a string as 
   an array of characters, and the [i] just gets the character in the i'th position in the string

The program will output:

T
e
s
t 

s
t
r
i 
n
g


Something that you can also do with for loops is have them nested.
Here is an example of that:

*/

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cout << j << " ";
    }
  }
  return 0;
}

/*
This program has a nested for loop that will run i*j times, so it will run 6 times.
Here is the output of this loop:

0 1
0 1
0 1

As you can see, it output a number, j, 6 times.

That is pretty much it for for loops. They are really simple, but they are one of the
most useful things that you will use.

*/







