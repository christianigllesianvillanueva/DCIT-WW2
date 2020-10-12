#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Welcome to the sum, difference, product, and quotient calculator." << endl;
    int num1;
    cout << "Please enter the first number: ";
    cin >> num1;
    int num2;
    cout << "Please enter the second number: ";
    cin >> num2;
    cout << "The sum is " << num1 + num2 << endl;
    cout << "The difference is " << num1 - num2 << endl;
    cout << "The product is " << num1 * num2 << endl;
    cout << "The quotient is " << num1 / num2 << endl;

	cout << "Thanks for using the calculator!" << endl;

    return 0;

}
