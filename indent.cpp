/*
 Maya Tabbah
 CS-136 Lab 7B
 Yasmeen Hassan
 This lab counts blocks that are opened and closed through brackets and adds
 indentation
 */

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int countChar (string line, char c){
    int counter = 0; //creates a counter
    for (int j = 0; j < line.length(); j++){ //for loop that keeps incrementing until the length of the current line is met
        if (line[j] == c){ //if the line is equal to the char
            counter += 1; //the counter incrementes
        }
    }
    return counter; //the counter is returned
}

string removeLeadingSpaces(string line){
    int i = 0;
    while(isspace(line[i])){
        i++;
    }
    string blank = "";
    for(int j = i; j < line.size(); j++){
        blank += line[j];
    }
    return blank;
}
int main(){
    int counter = 0;
    string line;
    
    while(getline(cin, line, '\n')){ //while input is still occuring
        string nline = removeLeadingSpaces(line); //var to call function with input
        string indent = ""; //new string
        for (int i = 0; i < (nline[0] != '}' ? counter : counter - 1); i++){
            indent += '\t'; //if the condition of the first element in the string is not equivalent to the bracket then evaluates to the counter, if not the counter is subtracted
        }
        cout << indent << nline << endl; //prints indented line
        counter += countChar (line,'{') - countChar(line, '}');
    }
}
