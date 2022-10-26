//Maya Tabbah
//CS-136 Lab 4C
//Yasmeen Hassan
// This program prints a cross shape based on the size the user enters



#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter a size: "; //user enters size
  cin >> size;
  cout << endl;

  for(int row = 0; row < size; row++)//outer loop for row
    {
      for(int col = 0; col < size; col ++) //inner loop for col....col less than size
        {
          if(row == col)
          {//when row equals col then print star
            cout << "*";
          }
          else if(col == size-1-row)
          { //when col equals the size minus one (for index) and minus row (to get to the end) then print star
            cout << "*";
          }
          else{cout << " ";} //all else false print space
        }
      cout << endl; //new line in outter loop
    }
}
