// hello.cpp: Justin Wilson
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
using namespace std;            // "using namespace <std>" says to use the std namespace. So instead of having to type "std::cout", we only need to write "cout".

int main() {
  cout << "Hello World!" << endl;       // the "endl" adds a newline.
  cout << "Hello World!";               // When I done it without the "endl", there was no \n
  return 0;
}
