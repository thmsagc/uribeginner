/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {

    int N, num;
    cin >> N;

    if(N < 0 || N > 1000000)
        return 0;

    vector<int> notes = {100, 50, 20, 10, 5, 2, 1};

    cout << N << "\n";
    for(int i = 0; i < notes.size(); i++){
        num = N/notes[i];
        cout << num << " nota(s) de R$ " << notes[i] << ",00\n";
        N = N % notes[i];
    }
    return 0;
}
