/*
	Logical Operators - do this after the if statements lesson

This lesson will tell you about how logical operators work in c++
This is something that is very simple, but it may seem confusing at first so just pay attention and dont think too hard

You're probably asking yourself "hey alex, what the fuck is a logical operator and when do we use them?"
Good question but chill dog

Logical operators are used in things called "if statements"
If statements are super simple. Like so simple that if you don't get them then you're just stupid

Here are the logical operators in c++
 - and
 - or
 - not
and they can also be written as:
 - and - &&
 - or  - ||
 - not - !

Here is what they each do:

&&
the and operator evaluates to true if both statements are true
example 1:
if (1==1 && 2==2) {
  cout << "this is true";
} else {
  cout << "this is false";
}
If you were to run that, the program would output "this is true" because 1 equals 1 and 2 equals to are BOTH true
example 2:
if (1==1 and 2==3) {
  cout << "this is true";
} else {
  cout << "this is false";
}
If you were to run this one, it would output "this is false" because 2 equals 3 evaluates to false, and since BOTH have to be true, the whole thing is false even thought the first part is true


||
The or operator evaluates to true if only ONE of the statements are true
example 1:
if (1==1 || 2==3) {
  cout << "this is true";
} else {
  cout << "this is false";
}
This program would output "this is true" because it only takes one statement to be true for the whole thing to be true


!
The not operator just negates whatever it is attached to
It is easier to explain with examples
if (!(1==1)) {
  cout << "this is true";
} else {
  cout << "this is false";
}
This would output "this is false" because the ! turns the true statement into a false one
Basically, it just switches true statements to false and false ones to true
example 2:
if (1==1 and !(2>4)) {
  cout << "this is true";
} else {
  cout << "this is false";
}
This outputs "this is true" because 1==1 is true and !(2>4) is true because the ! turns the false statement of 2>4 into a true one

See, that was super easy
if you just use logic there is no way that you can get it wrong, so if you do I don't know what that says about you...
