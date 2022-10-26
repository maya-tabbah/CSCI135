//Maya Tabbah
//CS-136 Lab 4G
//Yasmeen Hassan
// This code prints out a checkerboard 3x3 pattern based on what the user enters

#include <iostream>
using namespace std;

int main(){
    
    int width,height; //vars
    
    cout << "Enter width: "; //user enter width
    cin >> width;
    cout << endl; //aesthetics
    cout << "Enter height: "; //user enter height
    cin >> height;
    cout << endl;//aesthetics
    
    for(int rows = 0; rows < height; rows ++ ){ //outer loop based on height
        for(int col = 0; col < width; col++){ //inner loop based on width
            if( ((rows)/(3) + (col)/(3)) % (2) ==(0) ){ //if  row divided by three plus columns divided by three all modulo 2  (has a remainder 0)
                cout << "*"; //Then print star
            }
            else{
                cout << " "; //all else space
            }
        }
        cout << endl; //new line based on outer loop
    }
}
