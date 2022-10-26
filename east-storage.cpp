// Maya Tabbah
// CS-136 Lab 3A
// Yasmeen Hassan
// This program asks the user for a date for the current reservoir levels and searches through data and prints what the user requested

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;


int main() {
  //define date as a string
  string date;
  //define eastSt eastEl west St westEl as doubles
  double eastSt, eastEl, westSt, westEl;
  
  ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
      cerr << "File cannot be opened for reading." << endl;
      exit(1); // exit if failed to open the file
  }

  string junk;        // new string variable
  getline(fin, junk); // read one line from the file

  //ask user for date and store it in a string
  string user_date;
  // store user input in a string
  cout << "enter a date: ";
  cin >> user_date;

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                          //ignorring the remaining columns

    // for example, to print the date and East basin storage:

    //create a condition where this will only run if current value of date is equal to current input --> what the user chooses
    if(date == user_date){
      cout << date << " " << eastSt << endl;
    }
    
  }
  fin.close();
}
