// Maya Tabbah
// Yasmeen Hassan
// Lab 2A
/* This program asks a user for an input within a range and will keep asking if its
not in that range, if it is, it will square the number*/

#include <iostream>
#include <cmath>
using namespace std;

int number;

int main(){
    cout << "Please Enter an integer between 0-100"<< endl;
    cin >> number;
    
    while (number <= 0 || number >= 100) { //while loop
        cout << "Please re-enter" << endl; //will keep asking to re-enter
        cin >> number;
    }
    
    if (number >= 0 && number <= 100){ // if statement for power
        cout << "The number squared is " << pow(number,2); //squares num if condition met
    }
}

