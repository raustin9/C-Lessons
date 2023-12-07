/*
     Functions

This is where we start getting into the complicated things
As of now, you have been writing your entire program inside of the main() function. The main function
is where your code will actually execute. However, you can make your own functions.

Some examples of functions you will have seen by now are
- vector.size()       - returns size of vector
- vector.push_back()  - pushes element to back of vector

Once again, this is something that is going to be a lot easier to show you than explain it.

Here is an example of a basic function
*/

#include <iostream>
using namespace std;

int add_two_numbers(int a, int b) {
  return a + b;
}

int main() {
  int x,y,z;
  cin >> x >> y;
  z =  add_two_numbers(x,y);
  cout << z;
  return 0;
}

/*
In the program, I made my own custom function that takes two numbers and adds them together.

Here are the main parts of a function:
1. data type  -  this is the data type that you want you function to return. In this example, I
                 want to make it a type of int because it is adding two numbers, so I want it to return
                 the value that you get when you add them. You can also make it a type of 'void' if you
                 don't need to return anything. I will show an example of this later.
2. name       -  the name of the function. easy
3. parameters -  these are what are in the parentheses. In this example, it is (int a, int b). a and b are
                 the parameters to the function. Parameters are the values that you will operate on or change
                 in your function. I added a and b in mine. 
4. return val -  this is the value that you want your function to return. It has to match the data type that
                 you chose your function to return earlier. In the case that you made your function void, you
                 do not need a return value. If you remember, we have to return 0 at the end of the main function,
                 and if you notice, main is actually a function itself of type int, so that's why we return 0

If you do not want to make your function return something, you can make it a void.
Here is an example of one:
*/

#include <iostream>
using namespace std;

void Print() {
  cout << "this is the print function\n";
}

int main() {
  Print();
  return 0;
} 

/*
I made the void function Print, and all it does it print text to the screen.

Moving on to something important:
Reference parameters are super important when it comes to function.

Here is a basic example with them:
*/

#include <iostream>
using namespace std;

void change_numbers(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = t;
}

int main() {
  int x,y;
  cin >> x >> y;
  cout << x << " " << y << endl;
  change_numbers(x,y);
  cout << x << " " << y < endl;
  return 0;
}

/*
In the function I wrote, I made the two parameters a and b reference parameters. I did this by putting
the & sign before their names. 

What reference parameters mean is that you pass in the actual variable to the function rather than just 
the value that the variable holds.

The function I wrote switches the values that are passed in. a changes to b's value and b changes to a's value. 
This is possible because I used reference. If I did not use reference, x and y would not change because the changes
would only occur on the copies that would be passed in.

There is a lot more to functions than this, but you will just come to learn these things through experience.
*/
