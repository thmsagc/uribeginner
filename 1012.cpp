/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <cmath>

#define PI 3.14159

using namespace std;
 
int main() {
    double A, B, C, triangle, circle, trapeze, square, retangle;

    cin >> A;
    cin >> B;
    cin >> C;

    triangle = (A*C)/2;
    circle = PI * pow(C, 2);
    trapeze = ((A+B)*C)/2;
    square = pow(B,2);
    retangle = A * B;

    cout.precision(3);
    
    cout << "TRIANGULO: " << fixed << triangle << "\n";
    cout << "CIRCULO: " << fixed << circle << "\n";
    cout << "TRAPEZIO: " << fixed << trapeze << "\n";
    cout << "QUADRADO: " << fixed << square << "\n";
    cout << "RETANGULO: " << fixed << retangle << "\n";
    return 0;
}