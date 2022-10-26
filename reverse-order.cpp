//Maya Tabbah
//CS-136 Lab 3D
//Yasmeen Hassan
//This code prints out the date and west basin levels in reverse order

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
    
    //vars
    string date, startDate, endDate, westEl;
    double eastSt,eastEl,westSt;
    bool reachedStart = false;
    string westArray [365][2];

    
    //inputing file stream
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()){
        cerr<<"File cannot be opened for reading.";
        exit(1);
    }
    //skip header line
    string junk;
    getline(fin, junk);

    //receive start and end dates
        cout << "Enter starting date: ";
        cin >> startDate;
        cout << "Enter ending date: ";
        cin >> endDate;
    
    //imitating for loop to place into array
    int i = 0;
    //enter file reading loop
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        if(startDate == date){
            reachedStart = true;
        }
        if(reachedStart == true){
            westArray[i][0] = date;
            westArray[i][1] = westEl;
            i+=1;
        }
        if(endDate == date){
            fin.close();
        }

    }
    
    for(int j = i-1; j>=0; j--){
        cout << westArray[j][0] << " " << westArray[j][1] << " ft"
            << endl;
    }
}

