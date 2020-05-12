/*
    @author Thomás Augusto Gouveia Chaves
    @version 12/05/2020 (d/m/y)
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {
	vector<int> vetor;
	int ins;

	for(int i = 0; i < 3; i++){
		cin >> ins;
		vetor.push_back(ins);
	}

	vector<int> vetor_aux = vetor;


    for (int i = 0; i < vetor.size(); ++i){
        int menor = i;
        for (int j = i+1; j < vetor.size(); ++j)
            if (vetor[j] < vetor[menor])
                menor = j;     
        int aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
	}        

	
	for(int i = 0; i < vetor.size(); i++)
		cout << vetor[i] << "\n";
	cout << "\n";
	for(int i = 0; i < vetor.size(); i++)
		cout << vetor_aux[i] << "\n";
	
	
	
}
