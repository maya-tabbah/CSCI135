//Maya Tabbah
//CS-135 HW E3.5
//Yasmeen Hassan
//This program asks the user for 3 numbers and prints whether the numbers are increasing, decreasing, or neither

#include <iostream>
#include <cmath>
using namespace std;

int num1; //first number
int num2; //second number
int num3; //third number

int main() {
  cout << "Enter the first number: " << endl; //asks for the first number
  cin >> num1;

  cout << "Enter the second number: " << endl; //asks for the second number
  cin >> num2;

  cout << "Enter the third number: " << endl; //asks for the third number
  cin >> num3;

  if(num1 < num2 && num2 < num3){ //if first number is less than second and second number is less than third...
    cout << "increasing"; //...the numbers are increasing
  }

  else if(num1 > num2 && num2 > num3){ //if first number is greater than second and second number is greater than third....
    cout << "decreasing"; //...the numbers are decreasing
  }

  else{
    cout << "neither"; //if none of above is happening...print neither
  }
  
    
  
}
