// Functions Programming Projects.cpp : Contains two different programming projects(Properties of a Circle, and Inflation Trend)


// Inflation Trend Program
#include <iostream>
#include <iomanip>

using namespace std;

// Function for getting input prices from the user
void getInput(double& currentPrice, double &oneYearAgoPrice, double &twoYearsAgoPrice) {
    cout << "Enter the current price of the item: ";
    cin >> currentPrice;
    cout << "Enter the price of the item from one year ago: ";
    cin >> oneYearAgoPrice;
    cout << "Enter the price of the item from two years ago: ";
    cin >> twoYearsAgoPrice;
}

// Function for calculating the inflation rates for the two years
void calculateInflation(double currentPrice, double oneYearAgoPrice, double twoYearsAgoPrice, double &inflationRate1, double &inflationRate2) {
    inflationRate1 = ((currentPrice - oneYearAgoPrice) / oneYearAgoPrice) * 100;
    inflationRate2 = ((oneYearAgoPrice - twoYearsAgoPrice) / twoYearsAgoPrice) * 100;
}

// Function to output the results and determine the trend
void outputResults(double inflationRate1, double inflationRate2) {
    cout << "Inflation rate for the past year = " << inflationRate1 << "%" << endl;
    cout << "Inflation rate from the past two years = " << inflationRate2 << "%" << endl;
    if (inflationRate1 > inflationRate2) {
        cout << "The inflation trend is increasing." << endl;
    }
    else if (inflationRate1 < inflationRate2) {
        cout << "The inflation trend is decreasing." << endl;
    }
    else {
        cout << "The inflation rate is the same for both years." << endl;
    }
}

int main()
{   // Using setprecision and fixed for reducing the decemals.
    cout << fixed << setprecision(2);
    // Initializing the variables
    double currentPrice, oneYearAgoPrice, twoYearsAgoPrice;
    double inflationRate1, inflationRate2;

    // Getting input from the user
    getInput(currentPrice, oneYearAgoPrice, twoYearsAgoPrice);

    // Calculating the inflation rate
    calculateInflation(currentPrice, oneYearAgoPrice, twoYearsAgoPrice, inflationRate1, inflationRate2);

    // Printing the results
    outputResults(inflationRate1, inflationRate2);
=======
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
    cout << "It Contains two different programming projects (Properties of a Circle, and Inflation Trend)" << endl;
}
