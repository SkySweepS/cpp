#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
using namespace std;


int main() {


string type;
double area;
cin >> type;

 if (type == "square") {
    double side;
    cout << "Enter side: ";
    cin >> side;
    area = side * side;
}
else if (type == "rectangle") {
    double sideA, sideB;
    cout << "Enter side A: \n";
    cin >> sideA;
    cout << "Enter side B: \n";
    cin >> sideB;
    area = sideA * sideB;

}
else if (type == "circle") {
    double r;
    cout << "Enter Radious: ";
    cin >> r;
    double pi = 3.14159265359;
    area = pi * (r * r);
}
else if (type == "triangle") {
    double h;
    cout << "Enter Height: ";
    cin >> h;
    double side;
    cout << "Enter side: ";
    cin >> side;
    area = side * h / 2;

}
else {
    cout << "Invalid Figure\n";
}

cout << "The area is: " << area << "\n";

  return 0;
}