/*
    @author Thomás Augusto Gouveia Chaves
    @version 07/05/2020 (d/m/y)
*/

#include <iostream>

using namespace std;
 
int main() {
    int NUMBER, HOURS;
    double VALUE, SALARY;
    cin >> NUMBER;
    cin >> HOURS;
    cin >> VALUE;
    SALARY = VALUE*HOURS;
    cout << "NUMBER = " << NUMBER << "\n";
    cout.precision(2);
    cout << "SALARY = U$ " << fixed << SALARY << "\n";
    return 0;
}