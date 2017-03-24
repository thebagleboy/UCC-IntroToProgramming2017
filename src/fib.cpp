// Include the Input/Output library from the _Standard Library_
#include <iostream>

// Use the _namespace_ "std", also known as standard
using namespace std;

/* Create a function called "fib" which takes in one arguement;
 *   the depth of the search in the sequence
 */
int fib(int limit)
{
// Initialize our variables
  int a = 0; int b = 1;
  int i = 0;
  int c = 0;

  // Create a loop
  while(i < limit)
  {
    // This is where we do our work
    c = a + b;
    a = b;
    b = c;
    i = i + 1;
  }
  return c;
}

/* Our main function
 * This is where our program will start
 */
int main()
{
	// Call our function and output the results
	cout << fib(10) << endl;
	// Everything worked so return 0
	return 0;
}
