#include <iostream>
using namespace std;
void printArray(int[], int);

/*
 *This code allows the user to create an array of the size they chose
 *and fill in the array with values.
 *
 *@author Mitchel Santillan
 *@version 4/3/2019
 */
int main () {
  /*
   *This code takes in the size of the array and values to create an array and
   *prints out the values in the end.
   */
  int size;
  cout << "Enter size of array: ";
  cin >> size;
  int data[size];

  cout << "Now, enter " << size << " values into your array: ";
  for (int i = 0; i < size; i++) {
    cin >> data[i];
  }
  cout << "Your array contains the following values: \n";
  printArray(data, size);
}

//Funtcion below returns nothing but prints out a string which represents the array and its values.
void printArray(int data[], int size) {
  for (int i = 0; i < size; i++) {
    cout << data[i] << " ";
  }
  cout << endl;
}
