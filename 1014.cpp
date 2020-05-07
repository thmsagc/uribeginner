/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
    int X;
    double Y, consumption;

    cin >> X;
    cin >> Y;
    cout.precision(3);

    consumption = X/Y;

    cout << fixed << consumption << " km/l\n";
 
    return 0;
}