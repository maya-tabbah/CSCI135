//Maya Tabbah
//CS-136 Lab 2D
// Yasmeen Hassan
// This program computes and prints all fibonacci sequences from 0-59

#include <iostream>
#include <cmath>
using namespace std;

const int SEQ = 60;
int fib[SEQ];
int i;


int main(){
    
    do{
        fib[0] = 0; // sets 0th index to 0
        fib[1] = 1; //sets first index to i
        
        cout <<  fib[0] << endl; //prints 0th index
        cout <<  fib[1] << endl; //prints 1st index
        
        // for loop for printing and setting values to index
        for (i = 2; i < SEQ; i++){ //starting from the number 2 and less than CONST
            fib[i] = fib[i - 1] + fib[i - 2]; //fibonacci math with i var
            cout << fib[i] << endl; //sets loop math to array
    }
        
    }while(i < SEQ); //while i is less than the CONST 
        
    return 0;
}


