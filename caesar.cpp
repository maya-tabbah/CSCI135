//Maya Tabbah
//CS-136 Lab 6B
//Yasmeen Hassan
//This lab implements a caesar cipher based on the statement and offset the user enters.

#include <iostream>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift){

  char total = c;
  
  // total = total + rshift;

  //upper case ( 65 <= c <=90)
  if(isupper(total)){ //if is upper
    total = total + rshift;
    if(total > 90){
      total = total % 90;
      total = total + 64;
      return total;
    }
  }
  
  //lowercase (97 <= c <= 122 )
  if(islower(total)){ //if is lower
    total = total + rshift;
    if(total >= 122){
      total = total - 26;

      return total;
    }
  }

 
}
  

string encryptCaesar(string plaintext, int rshift){
  string blank=""; //creates a new string
  for(int i = 0; i < plaintext.length(); i++){
   
      blank += shiftChar(plaintext[i], rshift); //calls shift char function
   
  }
  return blank;
}

int main() {

  string plaintext; //string var
  int rshift; //int var

  cout << "Enter a text: ";
  getline(cin, plaintext); //gets the whole line
  cout << endl;
  cout << "Enter a shift: ";
  cin >> rshift;

  cout << encryptCaesar(plaintext, rshift);
  //calls caesar function
  
}
