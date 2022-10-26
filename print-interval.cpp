//Maya Tabbah
//CS-136 Lab 2B
//Yasmeen Hassan
// This program asks the user for two inputs and prints all integers in the range


#include <iostream> //libraries
using namespace std;

int L; //lower limit input
int U; //upper limit input

int main(){
    cout << "Please enter L (lower limit): "; //lower limit
    cin >> L;
    
    cout << "Please enter U (upper limit): "; //upper limit
    cin >> U;
    
    for (int i = L; i < U; i++){ //for i = lower limit, i < Upper limit, keep adding i until less than Upper limit
        cout << i << " "; //print i and a space
        
    }
}
