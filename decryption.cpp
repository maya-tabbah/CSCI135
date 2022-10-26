//Maya Tabbah
//CS-136 Lab 6D
//Yasmeen Hassan
//This lab implements both the caesar cipher and viginere cipher and both its decryptions

#include <iostream>
#include <cctype>
using namespace std;


char shiftChar(char c, int rshift){

  char total = c;
  
  // total = total + rshift;

  //upper case ( 65 <= c <=90)
  if(isupper(total)){ //if is upper
    total = (total- 'A' +rshift) %26 +'A';
      return total;
  }
  
  //lowercase (97 <= c <= 122 )
  if(islower(total)){ //if is lower
    total = (total- 'a' +rshift) %26 +'a';
  }
  return total;


}
  
string encryptCaesar(string plaintext, int rshift){
  string blank=""; //creates a new string
  for(int i = 0; i < plaintext.length(); i++){
      blank += shiftChar(plaintext[i], rshift); //calls shift char function
  }
  return blank;
}

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

string decryptVigenere(string plaintext, string keyword){

string blank = "";

char c;
int counter = 0, decrypt;

for(int i = 0; i < plaintext.length(); i++){
  c = plaintext[i];
  if(isupper(c)){
    decrypt = keyword[counter] - 'a';
    counter = (counter + 1) % keyword.length();
    c = 'A' + (c - 'A' - decrypt + 26) %26;
  }
  if(islower(c)){
    decrypt = keyword[counter] - 'a';
    counter = (counter + 1) % keyword.length();
    c = 'a' + (c - 'a' - decrypt + 26) %26;
  }
  blank += c;
}
return blank ;
  
}

  

char decryptChar(char c, int rshift){
  if (isupper(c)){
      c = (((c -'A' - rshift + 26) % 26) + 'A');
    return c;
  }
  else if(islower(c)){
      c = (((c -'a' - rshift + 26) % 26) + 'a');
  }

  return c;
}
string decryptCaesar(string plaintext, int rshift){
  string blank = "";
  
  for(int i = 0; i < plaintext.length(); i++){
      blank += decryptChar(plaintext[i], rshift);
    }
  
  return blank;
    
}


int main() {
  string plaintext, keyword;
  int rshift;

  //cout << decryptVigenere("cakecakeca", "cake");

  cout << "Enter text: ";
  getline(cin, plaintext);
  cout << endl;
  
  cout << "Caesar Cipher: ";
  cout << endl;
  cout << "Enter shift: ";
  cin >> rshift;
  cout << endl;
  cout << encryptCaesar(plaintext, rshift) << endl;
  cout << decryptCaesar(plaintext, rshift);
  cout << endl << endl;
  
  cout << "Vigenere Cipher: " << endl;
  cout << "Enter keyword: ";
  cin >> keyword;
  cout << endl;
  cout << encryptVigenere(plaintext, keyword) << endl;
  cout << decryptVigenere(plaintext, keyword);

  
}
