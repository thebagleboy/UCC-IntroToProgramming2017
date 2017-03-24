#include <iostream>
using namespace std;

int fib(int a, int b, int limit)
{
  int i = 0;
  int c = 0;
  while(i < limit)
  {
    // This is where we do our work
    c = a + b;
    a = b;
    b = c;
    i = i + 1;
//    cout << c << endl;
  }
  return c;
}

int main()
{
	cout << fib(2, 1, 10) << endl;
	return 0;
}
