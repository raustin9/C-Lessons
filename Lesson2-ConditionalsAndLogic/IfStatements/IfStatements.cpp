/*
   If Statements - read this before logical operators

Hello all, this is one of the most important lessons you will learn about programming so dont fuck this up

This is so easy, like you should not mess this up
It is just logic. Just follow the steps and you should get it right every time

If statements follow the logic of "if this is true, then do this. Otherwise, do this other thing"
See? So easy. Literally free

Here is how it would be formed:

if (this is true)
{
  then do this
}
else
{
  then do this other thing
}
This is the example in quotes I said above but in the form of an if statement. 
The else is "otherwise"

Here is the breakdown of all of it

the "this is true" part that is in parentheses is called the "condition"
conditions can be a lot of things, but more on that later

The code in the first pair of {} will only execute if the condition in the parentheses is true. If there is 
an else clause, then if the condition is false, then whatever is in the {} after the else will execute

IMPORTANT NOTE : not all if statements need to have an "else" part to it. If you don't need one, don't put one

If statements are very powerful and useful because of the condition. 
Here are some examples of simple conditions 
*/

int main() {
  if (2 + 5 == 7)
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }
  return 0;
}

/*
the example above will print out "true" because 5 + 2 does equal 7, so the condition is true

IMPORTANT NOTE:
 - you probable noticed that I used a "==" instead of "=" in the condition, and this is super important
   The difference is that "=" is called the assignment operator and the "==" is the comparison
   The assignment is used to set something equal to something else. For example if I say x = 4, then I used the "=" to set x equal to 4.
   However, in an if statement you ALWAYS use "==" because it is meant to COMPARE. Simply, never use just one = in an if statement condition

More on the condition:
Most conditions that you will use and see will be using these comparision operators:
 >  - greater than
 <  - less than
 >= - greater than or equal to
 <= - less than or equal to
 == - equal to
 != - not equal to 

These should be self explanatory

*/

// This will output false
int main() {
  if (2 < 2) cout << "true";
  else cout << "false";
  return 0;
}

// This will ouput true
int main() {
  if (2 <= 2) cout << "true";
  else cout << "false";
  return 0;
}

/*
 
Some final notes

It is important to note that whatever is in the else brackets will only run if the condition is false.
Make sure that you remember to use the else clause when you only want that code to run if the if statement is false
Also make sure that you don't put code in the else clause that you want to run even if the if statement is true

See what I mean? This is easy. Free, even
Just follow the steps and arrive at the conclusion

In the next lesson on Logical Operators, you will learn about some tools to make more powerful and specific conditions
*/
