/*
    @author Thomás Augusto Gouveia Chaves
    @version 11/05/2020 (d/m/y)
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {

    float A, B, C, delta, x1, x2;
    cin >> A;
    cin >> B;
    cin >> C;

    if(A == 0){
        cout << "Impossivel calcular\n";
        return 0;
    }
    delta = pow(B,2) - (4*A*C);

    if(delta < 0){
        cout << "Impossivel calcular\n";
        return 0;
    }

    x1 = ((-1)*B + sqrt(delta))/(2*A);
    x2 = ((-1)*B - sqrt(delta))/(2*A);

    cout.precision(5);

    cout << "R1 = " << fixed << x1 << "\n";
    cout << "R2 = " << fixed << x2 << "\n";
    return 0;
}