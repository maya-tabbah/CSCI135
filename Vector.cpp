//Maya Tabbah
//CS136
//Yasmeen Hassan
//This lab appends two vectors

#include <iostream>
#include <vector>
using namespace std;

vector <int> append(vector<int>a, vector<int>b){
  for(int i = 0; i < b.size(); i++)
  {
        a.push_back(b[i]);
   }
  return a;
}

int main()
{
  vector<int>a = {1,2,3,4};
  vector<int>b = {5,6,7,8};

  
  
}
