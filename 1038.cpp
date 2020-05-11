/*
    @author Thomás Augusto Gouveia Chaves
    @version 11/05/2020 (d/m/y)
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {

    vector<float> prices = {0, 4, 4.5, 5, 2, 1.5};

    int i, amount;
    cin >> i;
    cin >> amount;

    cout.precision(2);

    cout << "Total: R$ " << fixed << prices[i]*amount << "\n";
}
