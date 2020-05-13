//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){
	int valorA, valorB;
	cin >> valorA >> valorB;
	

	if(valorA > valorB){
		if(valorA%valorB == 0){
			cout << "Sao Multiplos" << endl;
		}
		else{
			cout << "Nao sao Multiplos" << endl;
		}
	}
	else if(valorA < valorB){
		if(valorB%valorA == 0){
			cout << "Sao Multiplos" << endl;
		}
		else{
			cout << "Nao sao Multiplos" << endl;
		}
	}
return 0;
}
