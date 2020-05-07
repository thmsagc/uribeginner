/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <cmath>

#define PI 3.14159

using namespace std;
 
int main() {
    double A, R;
    cin >> R;
    A = PI * pow(R, 2);
    cout.precision(4);
    cout << fixed << "A=" << A << "\n";
    return 0;
}