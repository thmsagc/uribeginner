/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>

using namespace std;
 
int main() {
    double A, B, MEDIA;
    cin >> A;
    cin >> B;
    MEDIA = (A*3.5 + B*7.5)/11;
    cout.precision(5);
    cout << fixed << "MEDIA = " << MEDIA << "\n";
    return 0;
}