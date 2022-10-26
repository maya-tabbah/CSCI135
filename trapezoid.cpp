// Maya Tabbah
// CS-136 Lab 4F
// Yasmeen Hassan
//This lab prints out a downwards trapesoid based on the height and length the user inputs

#include <iostream>
using namespace std;

int main(){
    int rows, width, height; // declare vars
  
  cout << "enter width: ";
  cin >> width; //user enters width
  cout << endl; //aesthetics
  cout << "enter height: ";
  cin >> height; //user enters height
  cout << endl; //aesthetics

 
    int spaces = 0, stars = width; // spaces and stars
    
    if (width-height < width/2){
        cout << "Impossible shape";
    }
    else{
        for (int row = 0; row < height; row++){ //outer for loop
            for(int col = 0; col < spaces; col ++){ //inner loop 1
                cout << " "; //space
            }
            for(int col =0; col < stars; col++){ //inner loop 2
                cout << "*"; //star
            }
            cout << endl; //new line in outer loop
            spaces += 1; // spaces increment
            stars -= 2; //stars decrement
        }
    }
    return 0;
}
