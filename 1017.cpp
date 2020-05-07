/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <cmath>

using namespace std;
 
int main() {

    int hours, averagespeed;
    double distance, liters;

    cin >> hours;
    cin >> averagespeed;

    distance = hours * averagespeed;

    liters = distance/12;

    cout.precision(3);
    cout << fixed << liters << "\n";
    return 0;
}