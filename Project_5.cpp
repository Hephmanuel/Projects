#include <iostream>
#include <cmath>
using namespace std;


//PROGRAM TO CALCULATE THE VOLUME OF A SPHERE
int main(){
    double radius;
    const double pi = 3.142;
    double volume;
    cout << "Input radius: ";
    cin >> radius;

    cout << "This is a program to calculate the volume of a sphere" << endl;
    volume = (4/3) * pi * pow(radius,2);


    cout << "The volume of sphere is: "<< volume;
    return 0;
}