// Assignment 1
// Question 2
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int y1,y2;
  
  for (int n = 0; n<=100; n++  ){
      y1 = 100 * n + 10;
      y2 = 5 * n * n + 2;
      cout << "At n = " << n << " y1 is = " << y1 << "  y2 is " << y2 << endl;
  }
}