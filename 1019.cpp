/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {

    int N, hours, minutes, seconds;

    cin >> N;

    hours = N / 3600;
    minutes = (N / 60) % 60;
    seconds = N % 60;

    cout << hours << ":" << minutes << ":" << seconds << "\n";
    return 0;
}
