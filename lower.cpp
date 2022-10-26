//Maya Tabbah
//CS-136 Lab 4D
//Yasmeen Hassan
//This code prints out a lower triangle with given side length



#include <iostream> //library
using namespace std;

int main() {
  int size;
  cout << "Enter a size: "; //user size choice
  cin >> size;
    cout << endl; 

  for (int row = 0; row < size; row++){ //outer loop
    for(int col = 0; col <= row; col++){ //inter loop connecting to outloop
      cout << "*"; //print star
    }
    cout<< endl;  //prints new line in outer loop
  }
}
