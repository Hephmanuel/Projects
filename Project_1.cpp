#include <iostream>
#include <cmath>
using namespace std;


//PROGRAM TO SOLVE SIMULTAENOUS EQUATION
int main(){
     
     cout << "This is a program to solve simultaneous equations" << endl;
    double a1;
    cout << "Enter the coefficient of x1: " ;
    cin >> a1;

    double b1;
    cout << "Enter the coefficient of y1: ";
    cin >> b1;

    double c1;
    cout << "Enter the final variable_1: " ;
    cin >> c1;

    double a2;
    cout << "Enter the coefficient of x2: " ;
    cin >> a2;

    double b2;
    cout << "Enter the coefficient of y2: ";
    cin >> b2;

    double c2;
    cout << "Enter the final variable_2: " ;
    cin >> c2;

    double x;
    double y;
    x = ((c2 * b1) - (b2 * c1)) / ((a2 * b1) - (b2 * a1));
    y = ((a1 * c2) - (a2 * c1)) / ((a2 * b1 ) + (a1 * b2));

    cout << " x = " << x << endl;
    cout << " y = " << y << endl;

        return 0;
    

}
