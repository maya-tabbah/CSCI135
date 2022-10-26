//Maya Tabbah
//CS-136 Lab 2C
//Yasmeen Hassan
//The code creates an array w/ 10 indexes and allows the user to pick the value of a chosen index

#include <iostream> //library
using namespace std;

int v;
int i;
const int VAL = 10;
int myData[VAL]; // array with 10 values

int main(){
    
    for (i = 0; i < VAL; i++){
        //set each element to equal one
        myData[i] = 1;
    }
    


do{
    for(i = 0; i< VAL; i++){
        cout << myData[i] << " ";
    }
    
    cout << "Enter index: " << endl;
    cin >> i;

    
    if(i < VAL && i >= 0){
        cout << "Enter value: " << endl;
        cin >> v;
        myData[i] = v; // sets inputted index to inputted value.
    }
    
}while(i < VAL && i >= 0); //while idex is less than 10 and 0+
if(i > VAL && i <= 0){
    exit;
}

return 0;
}
