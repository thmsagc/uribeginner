/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>

using namespace std;
 
int main() {
    double A, B, C, MEDIA;
    cin >> A;
    cin >> B;
    cin >> C;
    MEDIA = (A*2 + B*3 + C*5)/10;
    cout.precision(5);
    cout << fixed << "MEDIA = " << MEDIA << "\n";
    return 0;
}