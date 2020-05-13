//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int N;
	float notaUm, notaDois, notaTres;
	float media;
		
	cin >> N;

	for(int i = 1; i <= N; i++){
		cin >> notaUm;
		cin >> notaDois;
		cin >> notaTres;
		media = ((notaUm*2)+(notaDois*3)+(notaTres*5)) / 10;

		cout << fixed << setprecision(1) << media << endl;
	}

}
