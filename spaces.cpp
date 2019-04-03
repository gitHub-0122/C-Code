#include <iostream>
using namespace std;
/*
 *File that tests out number of spaces when using tab
 *
 *@author Mitchel Santillan
 *@version 4/3/2019
 */
int main() {
  /*
   *This code tests two cases to show formula in action
   *
   *The number of spaces the compiler prints out before the tab depends on the
   *number of characters before the \t.
   *We set n = (number of characters before the \t), then
   *if (n == 0)     spaces = 8;
   *else            spaces = a;
   *where a = (|n - 8| % 8);
   */

  cout << "123\t456" << endl;
  //The code above will print 5 spaces after 3 and continue with 456.
  cout << "12345\t678\n";
  //The code above will print 3 spaces after 5 and continue with 678.
  cout << "12\t345\n";
  //The code above will print 6 spaces after 2 and continue with 345.
}
