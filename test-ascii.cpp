//Maya Tabbah
//CS136 Lab 6A
//Yasmeen Hassan
//This code prints out each indivisual character and ascii value that the user enters


#include <iostream>
using namespace std;
string enter; //var

int main() {
  cout << "Enter a sentence: ";
  getline(cin, enter); //1st param is where ur getting input, 2nd is where ur storing it
  cout << endl; //aesthetics

  for(int i = 0; i < enter.length(); i++){ //loops through the length of input
    cout << char(enter[i]) << " " << int(enter[i]) << endl; //based on the for loop it prints out the character in the string plus the ascii equivalent
  }
  
}
