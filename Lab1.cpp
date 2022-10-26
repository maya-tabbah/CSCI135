//Maya Tabbah
//CSCI-136
//Yasmeen Hassan
//Lab 1A

#include <iostream>
using namespace std;

int num_one;
int num_two;

int main(){
    cout << "Please enter the first number" << endl;
    cin >> num_one;
    
    cout << "Please enter the second number " << endl;
    cin >> num_two;
    
    if(num_one > num_two){
        cout << "The smallest is "<< num_two;
    }
    
    else if(num_one < num_two){
        cout << "The smallest is"<< num_one;
    }
    
    else{
        cout << "They're both the same";
    }
    
    return 0;
    
}
