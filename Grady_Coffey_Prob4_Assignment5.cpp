#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    double side1;
    double side2;
    double side3;

public:
    // No-argument constructor
    Triangle()
    {
        side1 = side2 = side3 = 1.0;
    }

    // Constructor with parameters
    Triangle(double s1, double s2, double s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Returns perimeter
    double getPerimeter() const
    {
        return side1 + side2 + side3;
    }

    // Returns area (Heron's Formula)
    double getArea() const
    {
        double s = getPerimeter() / 2.0;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Displays triangle information
    void display() const
    {
        cout << "Sides: " << side1 << ", " << side2 << ", " << side3 << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
        cout << "Area: " << getArea() << endl;
        cout << endl;
    }

    // Less than operator
    bool operator<(const Triangle& t) const
    {
        return getArea() < t.getArea();
    }

    // Greater than or equal operator
    bool operator>=(const Triangle& t) const
    {
        return getArea() >= t.getArea();
    }

    // Not equal operator
    bool operator!=(const Triangle& t) const
    {
        return getArea() != t.getArea();
    }
};

int main()
{
    // Create triangles
    Triangle t1(4, 4, 4);
    Triangle t2(5, 5, 2);
    Triangle t3(5.5, 5.5, 1);

    // Display triangle information
    cout << "Triangle t1" << endl;
    t1.display();

    cout << "Triangle t2" << endl;
    t2.display();

    cout << "Triangle t3" << endl;
    t3.display();

    // Comparison results
    cout << boolalpha;

    cout << "t1 < t2: " << (t1 < t2) << endl;
    cout << "t2 >= t3: " << (t2 >= t3) << endl;
    cout << "t1 != t3: " << (t1 != t3) << endl;

    return 0;
}
