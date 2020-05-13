//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip> 

using namespace std;

int main(){

	int tempo, velocidade;
	cin >> tempo >> velocidade;

	double distancia = velocidade*tempo;

	cout << fixed << setprecision(3) << distancia/12 << endl;
}
