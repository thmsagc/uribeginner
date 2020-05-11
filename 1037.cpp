/*
    @author Thomás Augusto Gouveia Chaves
    @version 11/05/2020 (d/m/y)
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {

    float value;
    cin >> value;
    
    if(value < 0 || value > 100){
        cout << "Fora de intervalo\n";
        return 0;
    }
    else if(value >= 0 && value <= 25){
        cout << "Intervalo [0,25]\n";
    }
    else if(value > 25 && value <= 50){
        cout << "Intervalo (25,50]\n"; 
    }
    else if(value > 50 && value <= 75){
        cout << "Intervalo (75,100]\n";
    }
    else if(value > 75 && value <= 100){
        cout << "Intervalo (75,100]\n";
    }
    return 0;
}
