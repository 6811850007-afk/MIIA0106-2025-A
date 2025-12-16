#include <iostream>
#include <string>
using namespace std;

double calculateCircleArea(double x)
{
    double PI = 3.14159;
    double area = PI * x * x;
    return area;
}

double calculateRectangleArea(double width, double height)
{
    return width * height;
}
int main()
{
    double radius;
    cout << "circle: ";
    cin >> radius;

    double circleArea = calculateCircleArea(radius);
    cout << "circle with radius " << radius << " is " << circleArea << endl;

    double width, height;
    cout << "rectangle: ";
    cin >> width;
    cout << "rectangle: ";
    cin >> height;

    double rectangleArea = calculateRectangleArea(width, height);
    cout << "rectangle is " << rectangleArea << endl;

    return 0;
}