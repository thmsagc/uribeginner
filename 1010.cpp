/*
    @author Thomás Augusto Gouveia Chaves
    @version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <string>

using namespace std;
 
int main() {
    int CODE1, CODE2, UNITS1, UNITS2;
    double PRICE1, PRICE2, VALUE;
    cout.precision(2);
    cin >> CODE1;
    cin >> UNITS1;
    cin >> PRICE1;
    cin >> CODE2;
    cin >> UNITS2;
    cin >> PRICE2;
    VALUE = UNITS1*PRICE1 + UNITS2*PRICE2;
    cout << "VALOR A PAGAR: R$ " << fixed << VALUE << "\n";
    return 0;
}