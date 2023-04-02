#include <iostream>

using namespace std;

// forward declaration
int fibonacci(int n);

// fact(n) = n * fact(n - 1)
int factorial(int n) {
  cout << "Enter factorial: " << n << endl;
  if (n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

// orignal: void printFun(int test), need to convert void to int to prevent no opperator error in line 35
void printFun(int test)
{
    if (test < 1) {
        cout << "Test is less than 1" << endl;
    } else {
        cout << test << " ";
        printFun(test - 1); // statement 2
        cout << test << " ";
    }
}
// Printfun Method from 
// https://www.geeksforgeeks.org/introduction-to-recursion-data-structure-and-algorithm-tutorials/

int main() {
  cout << factorial(10) << endl;

  int test = 3;
  printFun(test); 
  cout << " " << endl; 

  for (int i = 1; i < 10; i++) {
    cout << "fibonacci i: " << i << " == " << fibonacci(i) << endl;
  }

  
  return 0;
}

// original code, fibonacci method was not defined 
int fibonacci(int n) {
  if (n < 3) {
    return 1;
  }
  return fibonacci(n - 2) + fibonacci(n - 1);
}