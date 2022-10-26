/*Maya Tabbah
 CS-136 Lab 7A
 Yasmeen Hassan
 Thus lab deleted the indentation of lines that the user enters*/



#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

string removeLeadingSpaces(string line){
    int i = 0;
    while(isspace(line[i])){
        i++;
    }
    string blank = "";
    for(int j = i; j < line.size(); j++){
        blank += line[j];
    }
    
  
  return blank;
}

int main() {
 /* string filename; //user input for file
 string codeLine;
  ifstream inputFile; //ifstream definition
  
  cout << "Enter file name: ";
  getline(cin,filename);

  inputFile.open(filename);
  if(inputFile.fail()){
        cerr << "File cannot be opened for reading.";
        exit(1);
  }
  
  while(inputFile >> codeLine){
    
  //inputFile.ignore(INT_MAX, '\n'); //skips to the end of line,
                          //ignorring the remaining columns
   getline(inputFile, codeLine);
    cout << removeLeadingSpaces(codeLine);
    cout << endl;
  }

   inputFile.close();

  */

 // cout << removeLeadingSpaces("      wow ");
    
    
    string line;
    while(getline(cin, line)){
        cout << removeLeadingSpaces(line) << endl;
    }
}
