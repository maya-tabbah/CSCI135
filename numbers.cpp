#include <iostream>
using namespace std;


bool isDivisibleBy(int n, int d){
  if(n % d == 0){
    return true;
  }else {
    return false;
    }
}

bool isPrime(int n){ //function bool
    bool prime = true;
    if(n==0 || n == 1){
      prime = false;
      return prime;
    }
    else if(n < 0){
      prime = false;
      return false;
    }
    else if(n == 2){
      return prime;
    }
    for(int i = 2; i <=  n-1 ; i++){ //starting from 2, stoping at n-1, incrementing
        if( n % i  == 0 || n == 0){
          prime = false;
          return prime;
          break;
          }
    }
  if(n!= 0 && n!=1 && n !=2){
    if(prime){
      return prime;
    }
  }
}

int nextPrime(int n)
{
  
  int i = n; // set variable equal to the number entered
  bool tester = false; // a variable set to the condition false
  while(!tester){  //while condition is not false...
    i++; //..increment new var by one
    
    if(isPrime(i)){ //goes back to the isPrime function and tests number
      tester = true; //if number is true, while loop condition changes and ends
    }
  }
  return i; //returns new var i
}

int countPrimes(int a, int b){
  int count = 0; //creates a counter var
  
  for(int i = a; i <= b; i++){ //for loop starting at a and ending at b
      if(isPrime(i)==1){ //goes back to the isPrime function and tests whether or not the number is true or false
        count++; //if its true, add to the counter/
    }
  }
  return count; //return count
  }


bool isTwinPrime(int n){
    bool test = false;

    if(isPrime(n) && isPrime(n+2)){
    test = true;
  }
  else if (isPrime(n) && isPrime(n-2)){
    test = true;
  }
  else{
    test = false;
  }
return test;
}

int nextTwinPrime(int n){
 
  int i = n;
 
    if(isTwinPrime(i) == true){ //if the number entered is true
      i++; //add one to it which makes it false
      while(isTwinPrime(i) == false){ //then searches for next prime until true
        i++; //increments until true
      }
    }
    else if(isTwinPrime(i) == false){ //if not true...repeat steps above
      while(isTwinPrime(i) == false){
        i++;
      }
  
}
  return i;
  }


int largestTwinPrime(int a, int b){
int i = a;
int largest= 2;

  for(i = b; i >= a; i--){
    if(isTwinPrime(i)){
       return i;
      }
  }

  if(isTwinPrime(largest)){
    return largest;
  }
  else{
    return -1;
  }
   
return largest;
  
}


int main() {
//  int v = isDivisibleBy(5, 2);
//  cout << v<< endl;;

//int v1 = isPrime(-1010010);
//cout << v1;

//cout << nextPrime(9);

 // cout << countPrimes(1,20);

 // cout << isTwinPrime(3);

//  cout << nextTwinPrime(11);
}
