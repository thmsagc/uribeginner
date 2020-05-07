/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <cmath>

#define PI 3.14159

using namespace std;
 
int main() {
    double R, VOLUME;
    cin >> R;
    VOLUME = (4/3)* PI * pow(R, 3);
    cout.precision(3);
    cout << "VOLUME = " << fixed << VOLUME << "\n";
    return 0;
}