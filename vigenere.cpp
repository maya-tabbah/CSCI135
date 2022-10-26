//Maya Tabbah
//CS-136 Lab 6C
//Yasmeen Hassan
//This code uses the vigenere cipher to encrypt a sentence that the user enters with the keyword they enter.


#include <iostream>
#include <cctype>
using namespace std;

string encryptVigenere(string plaintext, string keyword){
  string blank = "";  //a blank string
  int counter = 0;  // a counter

    for(int i = 0; i < plaintext.length(); i++){ //for loop based on plaintext length
      
     if(isalpha(plaintext[i])){ //if is character
       
      if(islower(plaintext[i])){ //if it is a lowercase letter
         blank += (((plaintext[i] - 97) + (keyword[counter] - 97)) % 26 + 97);
        //create new values from the ascii take for lowecase letters
       }
       else if (isupper(plaintext[i])){ // if it is uppercase
         blank += (((plaintext[i] - 'A') + (keyword[counter] - 'a')) % 26 + 'A');
         //create new values through the ascii for uppercase letters
       }
       
        counter ++; //increment counter
        if (counter == keyword.length()){
          //if the counter is the same length as the keyword start from zero again
          counter = 0;
        }
        
        
    }
     else{
       blank += plaintext[i]; //any other character stays the same
    }

  }
  return blank;
}

int main() {
  string plaintext, keyword;

  cout << "Enter a phrase: ";  //ask for plaintext
  getline(cin, plaintext);
  cout << endl;

  cout << "Enter a keyword: "; //ask for keyword
  cin >> keyword;
  cout << endl;

  cout << encryptVigenere(plaintext, keyword); //calls function
}


/*
we need to have a counter that will increment
use length to get the keyword size
as long as the counter is less than that value keep running
if its greater then loop back to the begining




*/
