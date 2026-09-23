// This program calculates and displays how far a car can go in a town and a highway on one tank of gas. 

#include <iostream>
using namespace std;
int main()
{
    cout << "This car has a 20-gallon gas tank. In town, it drives an average of 23.5 miles. On the highway, it averages 28.9 miles.\n";
    cout << endl;

    const int gallonsinTank = 20;
    double townMile = 23.5;
    double highwayMile = 28.9;

    double townDist = gallonsinTank * townMile;
    double HighwayDist = gallonsinTank * highwayMile;

    cout << "Town: " << townDist << " miles." << endl;
    cout << "Highway: " << HighwayDist << " miles." << endl;

    return 0;
}
