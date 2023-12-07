/*
    While Loops - Read this before going to for loops

While loops are something that are going to be your best friend

Before talking about while loops, you need to know what a loop does in general
A loop loops...
Basically, a loop is just a block of code that will run repeatedly over and over before moving on to the next chunk of code.
The easiest loop to make is a while loop

Remember the if statement?
Yes you do, and if you don't then go read it pussy

All a while loop is is an if statement without the else statement, and it repeates the code in the brackets until the condition becomes false
I will write an example below:
*/

#include <iostream>
using namespace std;

int main() {
  int x = 0;
  while (x < 10)
  {
    cout << x << endl;
    x++;
  }
  return 0;
}

/*
The while loop begins where I wrote while, and similar to the if statement, the condition is inside the parentheses.
As I said earler, the code inside the {} will run forever until the condition inside the parentheses is no longer true.
In this case, the condition is (x < 10). Because I set x = 0 at the beginning of the program, x will obviously be less
than 10, so the while loop will begin.
This means that the cout statement will continuously loop until the condition is false.
Beacuse I say x++ at the end of the block of code, it increases x by one each time the loop completes a cycle.
Because x increments each iteration of the loop, eventually, the condition will become (x < 10) --> (10 < 10) which is 
not true, and when it is not true, the cycle breaks and it will not continue.
The output of the program will be:

0
1
2
3
4
5
6
7
8
9

The loop ran 10 times. 

This loop can actually be written in a different way in something called a "for" loop, but I will talk about that in the other 
part of the lesson.

The condition in a while loop can actually be different from numbers. In fact, it almost always is.

To show you a pretty powerful example of how a while loop can be used, I will show you below
*/

// Example input file shown directly below
1 3 34 534 1288

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> v;
  int t;
  while(getline(cin,t)) {
    v.push_back(t);
  }
  return 0;
}

/*
There is a lot of stuff in this example so lets unpack it

1. The thing you probobly do not recognize is the "vector"
   If you remember when I talked about arrays in the variables
   lesson, all you need to know is that a vector is an array that
   is able to change how many elements are in it. In the case of
   this example, it begins with 0 elements.
2. The while loop begins with the condition of the getline() in it. This may be a little
   confusing, but it is really simple. The way that you can think about it is that the while
   loop will continue to run as long as getline() is able to get valid inputs. Basically, the
   loop will run until the end of input.
3. Once again, the vector is going to confuse you as you are unfamiliar with it. v is the name of 
   the vector, and the .push_back() method is important. All you need to know about push_back() is that 
   it appends the thing in the parentheses to the back of the vector. This means that at the end of the
   loop, the vector will contain all the elements from the input


That is pretty much it for while loops. There is another kind of loop that you will see called a 
for loop, and that one is much more common. So go read that section next.
*/
