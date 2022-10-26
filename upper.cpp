// Maya Tabbah
// CS-136 Lab 4E
// Yasmeen Hassan
// This lap prints the bottom left half of a square based on the length the user inputs

#include <iostream>
using namespace std;

int main() {
  int length;
  cout << "Enter the side length: ";
  cin >> length; //user input 
  cout << endl;

  for(int row = length; row > 0; row --) //for loop for the rows --> starts at user input and subtracts
  {
    for(int col = length-row; col > 0; col--) //for loop that adds a space incrementing in each row (starting from length subtracted by the row, so decrementing in the for loop)
      cout << " "; //prints a space when above condition is met
      for(int j = row; j > 0; j--) // for loop for the stats
      {
        cout <<"*"; //star
      }
    cout << endl; //connected to first loop that prints a new line
  }
}
  
