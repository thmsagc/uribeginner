/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <string>

using namespace std;
 
int main() {
    string NAME;
    double SALARY, SOLD, TOTAL;
    getline(cin, NAME);
    cin >> SALARY;
    cin >> SOLD;
    TOTAL = SALARY+(0.15*SOLD);
    cout.precision(2);
    cout << "TOTAL = R$ " << fixed << TOTAL << "\n";
    return 0;
}