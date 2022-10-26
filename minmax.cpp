// Maya Tabbah
// CS 136 Lab 3B
// Yasmeen Hassan
// This code prints out the min and max values of the East Basin

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;


int main() {
  string date;
  double eastSt, eastEl, westSt, westEl;
  double largest = 0;
  double smallest = INT_MAX;
  
  
  ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
      cerr << "File cannot be opened for reading." << endl;
      exit(1); // exit if failed to open the file
  }

  string junk;        // new string variable
  getline(fin, junk); // read one line from the file

  
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line,  ignorring the remaining columns

    if (eastSt < smallest){
      smallest = eastSt; // sets smallest number into var
    }
    if(eastSt > largest){
      largest = eastSt; // sets largest number into var
    }
    
  }
  cout << "Minimum storage in east basin is: " << smallest << endl;
  cout << "Maximum storage in east basin is: " << largest << endl;
  
  fin.close();
}
