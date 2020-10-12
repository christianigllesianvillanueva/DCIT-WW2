#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Welcome to the area of circle, square, rectangle and triangle calculator" << endl;
    cout << "Please enter to calculate the area of: " << endl;
    cout << "C for Circle" << endl;
    cout << "S for Square" << endl;
    cout << "R for Rectangle" << endl;
    cout << "T for Triangle" << endl;
    string input;
    cin >> input;
    if (input == "C") {
            int radius;
            cout << "You've chosen to calculate the area of circle. Please type the radius. ";
            cin >> radius;
            cout << "The area of circle is " << 3.14 * (pow(radius, 2)) << endl;
    }
    if (input == "S") {
            int side;
            cout << "You've chosen to calculate the area of circle. Please type the side. ";
            cin >> side;
            cout <<  "The area of square is " << pow(side, 2) << endl;

    }
    if (input == "R") {
            int length;
            int width;
            cout << "You've chosen to calculate the area of rectangle. Please type the length. ";
            cin >> length;
            cout << "Please type the width. ";
            cin >> width;
            cout << "The area of rectangle is " << length * width << endl;

    }
    if (input == "T") {
            int base;
            int height;
            cout << "You've chosen to calculate the area of triangle. Please type the base. ";
            cin >> base;
            cout << "Please type the height. ";
            cin >> height;
            cout << "The area of triangle is " << 0.5 * base * height << endl;

    }
    	
	cout << "Thanks for using the calculator!" << endl;



    return 0;

}

