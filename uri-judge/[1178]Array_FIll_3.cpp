//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
 
	double Vetor[100];
	double Entrada;
	cin >> Entrada;

	Vetor[0] = Entrada;
	for(int i = 0; i < 100; i++){
		 Vetor[i+1] = Vetor[i]/2;
	}
 
	for(int i = 0; i < 100; i++){
		cout << fixed << setprecision(4) << "N[" << i << "] = " << Vetor[i] << endl;
	}
 
    return 0;
}
