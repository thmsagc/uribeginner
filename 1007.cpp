/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>

using namespace std;
 
int main() {
    double A, B, C, D, DIFERENCA;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    DIFERENCA = (A * B)-(C * D);
    cout << "DIFERENCA = " << DIFERENCA << "\n";
    return 0;
}