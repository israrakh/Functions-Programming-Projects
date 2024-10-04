// Functions Programming Projects.cpp : Contains two different programming projects(Properties of a Circle, and Inflation Trend)

#include <iostream>
#include <cmath> // For using the sqrt()
#include <iomanip>
using namespace std;

// Function to calculate the distance between two points
double calcDistance(double x1, double y1, double x2, double y2) {
    double distanceBetweenTwoPoint = sqrt(pow(x2 - x1, 2) + (y2 - y1, 2));
    return distanceBetweenTwoPoint;
}

// Function to calculate the Radius of the circle
double calcRadius(double centerX, double centerY, double pointX, double pointY) {
    double radius = calcDistance(centerX, centerY, pointX, pointY);
    return radius;
}

const double PI = 3.1416; // Constant PI variable
// Function to calculate the circumference of the circle
double calcCircumference(double radius) {
    double circumference = 2 * PI * radius;
    return circumference;
}

// Function to calculate the area of the circle
double calcArea(double radius) {
    double areaOfCircle = PI * pow(radius, 2);
    return areaOfCircle;
}

int main()
{
    // Initializing variables
    double centerX, centerY, pointX, pointY;

    // Prompt the user to enter center and a point on the circumference
    cout << "Enter the coordinates of the center (x1, y1): ";
    cin >> centerX >> centerY;
    cout << "Enter the coordinates of a point on the circumference (x2, y2): ";
    cin >> pointX >> pointY;

    cout << fixed << showpoint << setprecision(2);
    // Calculating the radius
    double radius = calcRadius(centerX, centerY, pointX, pointY);

    // Calculating the circumference and area
    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    // Printing the results
    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}
