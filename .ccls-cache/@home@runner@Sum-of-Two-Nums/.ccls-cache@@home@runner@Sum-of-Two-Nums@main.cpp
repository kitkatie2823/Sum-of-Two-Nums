#include <iostream>
#include "library.h"
using namespace std;

int main() 
{
  int test_case = 1, x1 = 3, y1 = 2, x2 = -3, y2 = -6, x3 = 7, y3 = 3;
  cout << "Test case " << test_case << ":\t";

  cout << addition(x1, y1) << endl;

  test_case++;
  cout << "Test case " << test_case << ":\t";
  cout << addition(x2, y2) << endl;
  
  test_case++;
  cout << "Test case " << test_case << ":\t";
  cout << addition(x3, y3) << endl;
}