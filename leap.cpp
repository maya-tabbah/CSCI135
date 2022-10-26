// Maya Tabbah
// CS - 136
// Yasmeen Hassan
// This code determines if the input is a leap year or common year

#include <iostream>
using namespace std;

int year;

int main(){
    cout << "Enter year: " << endl; //asks for year
    cin >> year;
    
    if(year % 4 != 0){  //if year is not divisible by 4
        cout << "Common Year";
    }
    
    else if(year % 100 != 0){ //if year is not divisible by 100
        cout << "Leap Year";
    }
    \
    else if(year % 400 != 0){  //if year is not divisible by 400
        cout << "Common Year";
    }
    
    else{
        cout << "Leap Year"; //if none above, then leap year
    }
    
    return 0;
}
