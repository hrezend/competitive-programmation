//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>

using namespace std;

int main(){

	int contador=0;
	int entrada;
	cin >> entrada;

	for(int i=entrada;;i++){
		if(i%2 != 0){
			cout << i << endl;
			contador++;
		}

		if(contador == 6){
			break;	
		}		
	}
}
