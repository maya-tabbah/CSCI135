//Maya Tabbah
//CS136 HW 7.18
//Yasmeen Hassan
//Using classes and functions, this code returns the total perimeter of a triangle that the user enters with 3 differend side lengths


#include <iostream>
#include <cmath>
using namespace std;

struct Point{ //creates a new class called triangle
    double x,y;
};

struct Triangle{
    Point A,B,C;
};

double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double perimeter(Triangle x){
    double perimeter = distance(x.A, x.B) + distance(x.B, x.C) + distance(x.C,x.A);
    return perimeter;
}

int main() {
    Point a,b,c;

  cout << "Enter first points: ";
  cin >> a.x >> a.y; //side one user enters
  cout << endl;
  
  cout << "Enter second points: ";
  cin >> b.x >> b.y; //side two user enters
  cout << endl;
  
  cout << "Enter third points: ";
  cin >> c.x >> c.y; //side three user enters
  cout << endl;

    Triangle d = {a,b,c};
    
    perimeter(d);
    cout << perimeter;
}
