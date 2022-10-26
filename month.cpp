// Maya Tabbah
// CS-136
// Yasmeen Hassan
// This program prints the number of days in a given month and year

#include <iostream>
using namespace std;

// ask the user for the year
// ask for the month in the year

// using the code from last segment for leap year aspect


// if the input of month is february and is a leap year then print 29

int year;
int month;

int main(){
    cout << "Enter year: " << endl; //asks for year
    cin >> year;
    
    cout << "Enter month number: " << endl; //asks for month
    cin >> month;
    
    
    if(month == 1){ //jan
        cout << "31 days";
    }
    
    else if(month == 2 && year % 100 != 0 && year % 4 == 0 || year % 400 == 0){ //leap feb
        cout << "29 days";
    }
    
    else if(month == 3){  //march
        cout << "31 days";
    }
    
    else if(month == 4){  //april
        cout << "30 days";
    }
    
    else if(month == 5){ //may
        cout << "31 days";
    }
    
    else if(month == 6){   //june
        cout << "30 days";
    }
    
    else if(month == 7){   //july
        cout << "31 days";
    }
    
    else if(month == 8){   //aug
        cout << "31 days";
    }
    
    else if(month == 9){    //sep
        cout << "30 days";
    }
    
    else if(month == 10){   //oct
        cout << "31 days";
    }
    
    else if(month == 11){   //nov
        cout << "30 days";
    }
    
    else if(month == 12){   //dec
        cout << "31 days";
    }
    
    else{
        cout << "28 days";
    }
    
    return 0;
}

