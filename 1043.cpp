/*
    @author Thomás Augusto Gouveia Chaves
    @version 12/05/2020 (d/m/y)
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {
	float A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	cout.precision(1);
	if((A + B) > C && (B + C) > A && (A + C) > B)
		cout << "Perimetro = " << fixed << A+B+C << "\n";
	else 
		cout << "Area = " << fixed << ((A+B)*C)/2 << "\n";
}
