#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double side, area;
    const double PI = 3.14159265358979323846;  //I am just now realizing i couldve just copy pasted the pi instead of typing it in. I sit here; a fool of my own making

    cout << "Enter the side: ";
    cin >> side;

    area = (6 *side * side) / (4 * tan(PI / 6));

    cout << fixed<< setprecision(2);
    cout << "The area of the hexagon " << area << endl;

    return 0;
}
