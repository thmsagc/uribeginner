/*
    @author Thomás Augusto Gouveia Chaves
    @version 12/05/2020 (d/m/y)
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {
	int A, B;
	cin >> A;
	cin >> B;
	
	if(A > B)
		if(A%B == 0)
			cout << "Sao Multiplos\n";
		else
			cout << "Nao sao Multiplos\n";
	else
		if(B%A == 0)
			cout << "Sao Multiplos\n";
		else
			cout << "Nao sao Multiplos\n";
}
