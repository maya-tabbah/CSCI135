//Maya Tabbah
//CS-136 Lab 4A
//Yasmeen Hassan
// This program prints out the height and width using stars that the user chose


#include <iostream> //libraries
using namespace std;

int main() {
  int width; //width
  int height; //height

  cout<< "enter width: ";
  cin >> width; //user inputs the width
  cout << endl; //aesthetic purposes
  cout << "enter height: ";
  cin >> height;//user inputs the height
  cout << endl; //aesthetic purposes

  for(int i = 0; i < height; i++){ //outer loop that prints the height
    cout<<endl; //seperation 
    for(int j = 0; j < width; j++){ //inner loop that prints out the width
      cout << "*"; //the star
    }
  }
  
}
