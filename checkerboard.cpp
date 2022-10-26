//Maya Tabbah
//CS-136 Lab 4B
//Yasmeen Hassan
//This program prints a checkered like pattern using the height and width the user inputs



#include <iostream>
using namespace std;

int main()
{
  int width; //width
  int height; //height

  cout<< "enter width: ";
  cin >> width; //user inputs the width
  cout << endl; //aesthetic purposes
  cout << "enter height: ";
  cin >> height;//user inputs the height
  cout << endl; //aesthetic purposes


  for(int i = 0; i < height; i++){ //height outter loop
    for(int j = 0; j < width; j++){  //width inner loop
      if(i%2 ==0 && j%2 == 0){ //if height and width are even ...
        cout<<"*"; //... print star
      }
      else if(i%2 !=0 && j%2 != 0){ //if height and width are not even...
        cout << "*"; //...print star
      }
      else{cout<<" ";} //else print space
    }
    cout << endl; //new line...outter loop
  }
}
