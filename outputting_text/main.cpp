#include <iostream>
using namespace std;

int main() {
  // flush and endl force the program to "clear the buffer"
  // by outputting the code. We need to do this to guarantee
  // that the text is output. Flush doesn't create a new line
  // while endl does
  int numberCats = 5;
  cout << "Starting program..." << flush;
  cout << "This is some text" << endl;
  cout << "seperate strings with <<" << " like so" << endl;
  cout << "arg1: string, arg2: " << numberCats << endl;
  return 0;
}