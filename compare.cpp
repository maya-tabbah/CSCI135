// Maya Tabbah
// CS 136 Lab 3B
// Yasmeen Hassan
// This lab prints out every day in between what the user enters and whether or not the east of west basin was  greater

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
  string date;
  double eastSt, eastEl, westSt, westEl; // data categories
  string user_date1, user_date2;

  ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
      cerr << "File cannot be opened for reading." << endl;
      exit(1); // exit if failed to open the file
  }

  string junk;        // new string variable
  getline(fin, junk); // read one line from the file

  cout << "Enter starting date: "; //user enters date one
  cin >> user_date1;
  cout << endl;
  cout << "Enter date two: "; // user enters date two
  cin >> user_date2;
  cout << endl;



  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { //reads data
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line,  ignorring the remaining columns

    while(date >= user_date1 && date <= user_date2){ //goes through segment of data the user chose
      cout << date;
        if(westEl > eastEl){ //if west elevation is bigger
            cout << " West" << endl; //print west
              }
        else if (westEl < eastEl){ //if west elevation is smaller
                cout << " East"<< endl; //print east
              }
      
        break; // break once condition is met
    
  }
}
fin.close();
 
}

