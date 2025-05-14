#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num1 = 7, num2 = 6;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = 0.0;


    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        cout << "Error: Division by zero." << endl;
        return 1; 
    }

    // results
    cout << fixed << setprecision(2);
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}