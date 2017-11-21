// get_input.cpp: Maggie Johnson
// Description: Illustrate the use of cin to get input.

#include <iostream>
using namespace std;        // So we're using the "std" namespace, so we can type "cout" instead of "std.cout"

int main() {
  int input_var = 0;        // this declares "input_var" as an int, and initializes it to 0
  // Enter the do while loop and stay there until either
  // a non-numeric is entered, or -1 is entered. Note that
  // cin will accept any integer, 4, 40, 400, etc.
  do {
    cout << "Enter a number (-1 = quit): ";         // cout prints the argument, which is a string, to stdout. One thing to notice about this function(?) is that the args aren't in brackets??
            // Another thing to notice is the "<<", which I think means that the string is used as the input for cout??
    // The following line accepts input from the keyboard into
    // variable input_var.
    // cin returns false if an input operation fails, that is, if
    // something other than an int (the type of input_var) is entered.
    if (!(cin >> input_var)) {          // So this line tests the return value of the expression "cin >> input_var". 
            // I'm guessing that "cin" gets user input;
            // ">>" directs the value of the input;
            // "input_var" is used to store the input;
            // And finally, the value of "input_var" is tested for a value
      cout << "You entered a non-numeric. Exiting..." << endl;
            // if input_var is False (IE: is 0; print the string and break from the loop;
      break;
      // exit the do while loop
    }
    if (input_var != -1) {
        // if input_var is != -1;
      cout << "You entered " << input_var << endl;
        // print "You entered" concatenated with the value of input_var and 
        // "endl" which adds the \n char;
    }
  } while (input_var != -1);
        // "while" perpetuates the loop as long as input_var is != -1;
  cout << "All done." << endl;
        // After the loop terminates, print "All done";
  return 0;
}
