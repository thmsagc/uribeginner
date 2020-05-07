/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
    int A, B, C, MaiorAB, MaiorABC;
    cin >> A;
    cin >> B;
    cin >> C;
    MaiorAB = (A + B + abs(A - B))/2;
    MaiorABC = (MaiorAB + C + abs(MaiorAB - C))/2;
    cout << MaiorABC << " eh o maior\n";
 
    return 0;
}