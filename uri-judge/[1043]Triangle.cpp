//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float ladoA, ladoB, ladoC, TROCA;
	cin >> ladoA >> ladoB >> ladoC;

	//Ordenando os valores do maior para o menor
	if (ladoA < ladoB){
		TROCA = ladoA;
        	ladoA = ladoB;
        	ladoB = TROCA;
    	}
	if (ladoB < ladoC){
        	TROCA = ladoB;
        	ladoB = ladoC;
        	ladoC = TROCA;
    	}
	if (ladoA < ladoB){
        	TROCA = ladoA;
        	ladoA = ladoB;
        	ladoB = TROCA;
	}



	if(ladoA < ladoB+ladoC){
		float perimetro = ladoA+ladoB+ladoC;
		cout << fixed << setprecision(1) << "Perimetro = " << perimetro << endl;
	}
	else{
		float area = ((ladoA+ladoB)*ladoC) / 2;
		cout << fixed << setprecision(1) << "Area = " << area << endl;
	}
}
