/*
    @author Thomás Augusto Gouveia Chaves
    @version 11/05/2020 (d/m/y)
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {
	float N1, N2, N3, N4, average, score;
	cin >> N1;
	cin >> N2;
	cin >> N3;
	cin >> N4;
	average = (N1*2 + N2*3 + N3*4 + N4)/10;
	cout.precision(1);
	cout << "Media: " << fixed << average << "\n";
	if(average > 7.0)
		cout << "Aluno aprovado.\n";
	else if(average < 5.0){
		cout << "Aluno reprovado.\n";
	} else {
		cout << "Aluno em exame.\n";
		cin >> score;
		average = (average+score)/2;
		cout << "Nota do exame: " << fixed << score << "\n";
		if(average > 5.0)
			cout << "Aluno aprovado.\n";
		else
			cout << "Aluno reprovado.\n";
		cout << "Media final: " << fixed << average << "\n";
	}
}
