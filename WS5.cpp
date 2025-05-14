#include <iostream>
using namespace std;

int main() {
    double length = 6.0;
    double width = 12.0;

    // area
    double area = length * width;

    // perimeter
    double perimeter = 2 * (length + width);

    // results
    cout << "\n--- Rectangle Properties ---" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}