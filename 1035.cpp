/*
    @author Thomás Augusto Gouveia Chaves
    @version 11/05/2020 (d/m/y)
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {

    int A, B, C, D;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    if(B > C && D > A && (C+D) > (A+B) && C > 0 && D > 0 && (A%2 == 0))
        cout << "Valores aceitos\n";
    else 
        cout << "Valores nao aceitos\n";
    
    return 0;
}